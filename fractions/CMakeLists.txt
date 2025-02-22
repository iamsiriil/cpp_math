cmake_minimum_required(VERSION 3.10)

project(Fractions VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(fractions STATIC
	src/fractions.cpp
	src/main.cpp
)
target_include_directories(fractions PUBLIC inc)
target_compile_options(fractions PRIVATE -Wall -Wextra -Werror)

add_executable(test_fraction
	tests/test_fraction/cpp/src/test_functions.cpp
	tests/test_fraction/cpp/src/main.cpp
)
target_include_directories(test_fraction PRIVATE
	tests/test_fraction/cpp/inc
	include
)
target_link_libraries(test_fraction PRIVATE fractions)

