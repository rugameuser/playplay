cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(playplay VERSION 0.2.0 LANGUAGES CXX)

#   Abseil requires C++11
set(CMAKE_CXX_STANDARD 11)

if (WIN32)
    add_compile_options(/W1)
endif()

add_subdirectory(abseil-cpp)
add_executable(playplay main.cpp deobfuscate.cpp deobfuscate2.cpp)

target_link_libraries(playplay absl::numeric)
