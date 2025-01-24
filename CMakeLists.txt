cmake_minimum_required(VERSION 3.30)

project(Pong VERSION 1.0)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED True)

add_executable(Pong src/main.c)

target_include_directories(Pong PRIVATE include)