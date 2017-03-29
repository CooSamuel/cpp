cmake_minimum_required(VERSION 3.5)
project(cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    Assignment_3/Assignment_main.cpp)

add_executable(cpp ${SOURCE_FILES})