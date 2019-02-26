cmake_minimum_required(VERSION 3.13)
project(test_gtest)

set(CMAKE_CXX_STANDARD 14)

include_directories(googletest/include)
include_directories(googletest)
include_directories(.)

add_subdirectory(./googletest)


add_executable(test_logic_function src/logic_function.h test/test_logic_function.cc)
add_executable(test_gtest src/main.cc)

target_link_libraries(test_logic_function gtest gtest_main)