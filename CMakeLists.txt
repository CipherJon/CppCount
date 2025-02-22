cmake_minimum_required(VERSION 3.10)

# Project name
project(Calculator)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Add executable
add_executable(calculator src/main.cpp src/calculator.cpp)

# Add tests
add_executable(test_calculator tests/test_calculator.cpp src/calculator.cpp)