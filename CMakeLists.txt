cmake_minimum_required(VERSION 3.12)
project(clion)

set(CMAKE_CXX_STANDARD 14)

add_executable(clion src/main.cpp include/employee.h src/employee.cpp)