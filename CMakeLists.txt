cmake_minimum_required(VERSION 3.30)

# Build executable in build\Debug instead of build\Debug\src\....
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

project(HelloPyTorchCpp VERSION 1.0.0 LANGUAGES CXX)

add_subdirectory(external)
add_subdirectory(src)
