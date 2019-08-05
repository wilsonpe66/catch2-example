cmake_minimum_required(VERSION 3.13.4)
project(factorial)

add_definitions("-std=c++2a")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_subdirectory(src)
