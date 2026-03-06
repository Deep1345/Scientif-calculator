cmake_minimum_required(VERSION 3.10)

project(ScientificCalculator)

set(CMAKE_CXX_STANDARD 11)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_library(calculator calculator.cpp)

add_executable(runTests test_calculator.cpp)

target_link_libraries(runTests calculator ${GTEST_LIBRARIES} pthread)
