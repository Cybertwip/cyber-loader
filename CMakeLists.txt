

cmake_minimum_required(VERSION 3.4.0)

project(cyber-loader)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_OSX_ARCHITECTURES arm64)
set(CMAKE_LIBRARY_ARCHITECTURE arm64)

SET(CMAKE_BUILD_TYPE Debug)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-deprecated-declarations -Wno-int-to-pointer-cast")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-deprecated-declarations -Wno-int-to-pointer-cast")

include_directories(wasmtime-c/include)
include_directories(.)

add_executable(cyber-loader cyber-loader.cpp)

target_link_directories(cyber-loader PUBLIC wasmtime-c/lib)

find_package(OpenGL REQUIRED)

set(SFML_DIR "/opt/homebrew/Cellar/sfml/2.5.1_2/lib/cmake/SFML")

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

target_link_libraries(cyber-loader PUBLIC ${OPENGL_LIBRARIES})
target_link_libraries(cyber-loader PUBLIC sfml-graphics sfml-audio)

add_library(wasmtime_shared SHARED IMPORTED GLOBAL)
set_target_properties(wasmtime_shared
        PROPERTIES
        #IMPORTED_LOCATION ${PROJECT_SOURCE_DIR}/wasmtime-c-x86_64/lib/libwasmtime.dylib
        IMPORTED_LOCATION ${PROJECT_SOURCE_DIR}/wasmtime-c/lib/libwasmtime.dylib
        )

target_link_libraries(cyber-loader
        PUBLIC
        wasmtime_shared
        "-Wl,-force_load $<TARGET_PROPERTY:wasmtime_shared,IMPORTED_LOCATION>"
        )

#link_libraries(-Wl,-force_load wasmtime-c-x86_64/lib/libwasmtime.a)
link_libraries(-Wl,-force_load wasmtime-c/lib/libwasmtime.a)


include (ExternalProject)
set(WASI_SDK_PATH /Users/victor.lopez1/Projects/wasi-sdk/wasi-sdk-20.0)
ExternalProject_Add(examples 
SOURCE_DIR ${CMAKE_CURRENT_LIST_DIR}/examples
CMAKE_ARGS      
-DCMAKE_SYSTEM_NAME=WASI
-DCMAKE_SYSTEM_VERSION=1
-DCMAKE_SYSTEM_PROCESSOR=wasm32
-DCMAKE_C_COMPILER_WORKS=1
-DCMAKE_C_COMPILER=${WASI_SDK_PATH}/bin/clang
-DCMAKE_CXX_COMPILER=${WASI_SDK_PATH}/bin/clang++
-DCMAKE_SYSROOT=${WASI_SDK_PATH}/share/wasi-sysroot
-DCMAKE_LIBRARY_OUTPUT_DIRECTORY=${CMAKE_BINARY_DIR}
-DCMAKE_RUNTIME_OUTPUT_DIRECTORY=${CMAKE_BINARY_DIR}
BUILD_ALWAYS 1 
INSTALL_COMMAND cmake -E echo "Skipping install step."
)

