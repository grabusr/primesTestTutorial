cmake_minimum_required(VERSION 3.7)
project(PrimesCalculator)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(libs)
add_subdirectory(app)
add_subdirectory(test)

set(SOURCE_FILES main.cpp)
add_executable(PrimesCalculator ${SOURCE_FILES})