cmake_minimum_required(VERSION 2.8)

set(TEST_NAME PrimesTest)

project(${TEST_NAME})

set(CMAKE_CXX_STANDARD 14)

include_directories(${gtest_SOURCE_DIR}/include)
include_directories(${gmock_SOURCE_DIR}/include)
include_directories(${PrimesLib_SOURCE_DIR})

aux_source_directory(. SRC)

add_executable(${TEST_NAME} ${SRC})

target_link_libraries(${TEST_NAME} gmock gmock_main)
target_link_libraries(${TEST_NAME} PrimesLib)

