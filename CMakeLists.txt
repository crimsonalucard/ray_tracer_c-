cmake_minimum_required(VERSION 3.3)
project(ray_tracer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp include/vec3.h)
include_directories(include)
add_executable(ray_tracer ${SOURCE_FILES})