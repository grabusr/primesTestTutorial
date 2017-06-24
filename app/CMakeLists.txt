cmake_minimum_required(VERSION 2.8)

set(LIB_NAME PrimesLib)

project(${LIB_NAME})

set(CMAKE_CXX_STANDARD 14)

aux_source_directory(. SRC)

add_library(${LIB_NAME} STATIC ${SRC})

