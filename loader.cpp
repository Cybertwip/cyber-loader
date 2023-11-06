#include <fstream>
#include <iostream>
#include <sstream>
#include <span>
#include <string>
#include <cstdint>  // For uint8_t

#include <wasmtime.hh>

#include <gl4_functions.h>

#include <SFML/Graphics.hpp>


std::shared_ptr<sf::RenderWindow> window;

using namespace wasmtime;

std::vector<uint8_t> readFile(const char* name) {
    std::ifstream file(name, std::ios::binary);
    std::vector<uint8_t> content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    return content;
}

std::shared_ptr<Instance> instance;
std::shared_ptr<Store> store;

Func* allocate_func;
Memory* memory;

void* allocate(size_t size){
  return (void*)allocate_func->call(*store, {Val(static_cast<int32_t>(size))}).unwrap()[0].i32();
}

uint8_t* get_memory() {
    return memory->data(*store).data();
}

int main() {
  wasmtime::Config config;
  config.memory64(false);
  config.debug_info(true);
  config.static_memory_maximum_size(0);
  config.static_memory_guard_size(size_t(1) << size_t(36));

  Engine engine(config);
  
  store = std::make_shared<Store>(engine);

  std::cout << "Compiling module...\n";
  auto wasm = readFile("libframebuffer.wasm");
  std::span<uint8_t> span(wasm.data(), wasm.size());

  Module module = Module::compile(engine, span).unwrap();
  std::cout << "Instantiating module...\n";

  // Configure WASI and store it within our `wasmtime_store_t`
  WasiConfig wasi;
  wasi.preopen_dir("..", "/");
  wasi.inherit_argv();
  wasi.inherit_env();
  wasi.inherit_stdin();
  wasi.inherit_stdout();
  wasi.inherit_stderr();
  store->context().set_wasi(std::move(wasi)).unwrap();

  // Create our linker which will be linking our modules together, and then add
  // our WASI instance to it.
  Linker linker(engine);
  linker.define_wasi().unwrap();

  std::string mod_name = "env";

  std::vector<wasmtime::Func> funcs;
  auto& types_map = get_function_types_map();
  for(auto& type : types_map){
    wasmtime::Func func = generate_import(*store, type.first, types_map);
    Extern externFunc = func;
    linker.define(*store, mod_name, type.first, externFunc).unwrap();
  }


  std::string function_name = "window_should_close";

	wasmtime::Func window_should_close(*store, wasmtime::FuncType({}, {wasmtime::ValKind::I32}), [function_name, types_map](
		wasmtime::Caller caller, 
		std::span<const wasmtime::Val> args, 
		std::span<wasmtime::Val> results) -> 
		wasmtime::Result<std::monostate, wasmtime::Trap> {
			if(results.size() > 0){
				results[0] = !window->isOpen();
			}

      return wasmtime::Result<std::monostate, wasmtime::Trap>(std::monostate{}).ok();		
		}
	);

  Extern window_should_close_extern = window_should_close;

  linker.define(*store, mod_name, function_name, window_should_close_extern).unwrap();

  function_name = "poll_events";

	wasmtime::Func poll_events(*store, wasmtime::FuncType({}, {}), [function_name, types_map](
		wasmtime::Caller caller, 
		std::span<const wasmtime::Val> args, 
		std::span<wasmtime::Val> results) -> 
		wasmtime::Result<std::monostate, wasmtime::Trap> {
      sf::Event event;
      while (window->pollEvent(event))
      {
          // Request for closing the window
          if (event.type == sf::Event::Closed)
          {
              window->close();
          }

          // The escape key was pressed
          if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape))
          {
              window->close();
          }
      }

      return wasmtime::Result<std::monostate, wasmtime::Trap>(std::monostate{}).ok();
		}
	);

  Extern poll_events_extern = poll_events;

  linker.define(*store, mod_name, function_name, poll_events_extern).unwrap();

  function_name = "request_animation_frame";

	wasmtime::Func request_animation_frame(*store, wasmtime::FuncType({}, {}), [function_name, types_map](
		wasmtime::Caller caller, 
		std::span<const wasmtime::Val> args, 
		std::span<wasmtime::Val> results) -> 
		wasmtime::Result<std::monostate, wasmtime::Trap> {
      window->display();

      return wasmtime::Result<std::monostate, wasmtime::Trap>(std::monostate{}).ok();		
  }
	);

  Extern request_animation_frame_extern = request_animation_frame;

  linker.define(*store, mod_name, function_name, request_animation_frame_extern).unwrap();

  window = std::make_shared<sf::RenderWindow>(sf::VideoMode(800, 450), "Wasmer Wasi Native Backend", sf::Style::Default, sf::ContextSettings(24, 8, 4, 4, 1));
  window->setVerticalSyncEnabled(true);
  window->setActive();

  // Instantiate our first module which only uses WASI, then register that
  // instance with the linker since the next linking will use it.
  instance = std::make_shared<Instance>(linker.instantiate(*store, module).unwrap());

  Func alloc = std::get<Func>(*(instance->get(*store, "allocate")));

  allocate_func = &alloc;

  Memory local_memory = std::get<Memory>(*(instance->get(*store, "memory")));

  memory = &local_memory;

  Func f = std::get<Func>(*instance->get(*store, "_start"));
  f.call(*store, {}).unwrap();

  std::cout << "Running a gc..\n";
  store->context().gc();
}