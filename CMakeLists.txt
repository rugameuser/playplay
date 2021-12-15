cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)
project(playplay.bin VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O3")

add_executable(playplay.bin main.cpp deobfuscate.cpp deobfuscate2.cpp)
