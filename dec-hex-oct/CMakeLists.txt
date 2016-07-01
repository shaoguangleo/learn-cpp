cmake_minimum_required(VERSION 2.8)
project(dec_hex_oct)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES dec_hex_oct.cpp)
add_executable(dec_hex_oct ${SOURCE_FILES})