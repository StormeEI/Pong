cmake_minimum_required(VERSION 3.30)

project(Pong VERSION 1.0)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED True)
set(BUILD_SHARED_LIBS OFF CACHE BOOL "BUILD STATIC" FORCE)

add_subdirectory(external/raylib)

file(GLOB SOURCES "src/*.c")

add_executable(Pong ${SOURCES})

target_include_directories(Pong PRIVATE include)

target_link_libraries(Pong raylib)

