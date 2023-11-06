cmake_minimum_required(VERSION 3.4.0)

project(examples)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${OUTPUT_DIRECTORY})
set(CMAKE_SHARED_LIBRARY_SUFFIX ".wasm")
set(CMAKE_STATIC_LIBRARY_SUFFIX ".wasm")
set(CMAKE_EXECUTABLE_SUFFIX ".wasm")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIRECTORY})

set(CFLAGS 
         -g3
         -D__wasi__
         -D__wasm32__
         -fno-trapping-math 
         -D_WASI_EMULATED_MMAN 
         -D_WASI_EMULATED_SIGNAL 
		 -D_WASI_EMULATED_PROCESS_CLOCKS 
         -D__WASI__
         -fno-exceptions)

add_compile_options(${CFLAGS})
include_directories(system)
include_directories(.)
include_directories(glad/include)

add_subdirectory(raylib)

add_executable(file tgc.c file.cpp dlsym.cpp glad/src/glad.cpp)

add_library(framebuffer SHARED tgc.c framebuffer.cpp dlsym.cpp glad/src/glad.cpp)
#add_library(audio SHARED tgc.c audio.cpp dlsym.cpp glad/src/glad.cpp)

#target_link_libraries(audio PUBLIC raylib)
