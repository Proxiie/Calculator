cmake_minimum_required(VERSION 3.9)
project(Calculator)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(Calculator main.cpp)