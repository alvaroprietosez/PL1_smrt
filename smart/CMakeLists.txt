cmake_minimum_required(VERSION 3.20)

project(smart)

set(CMAKE_CXX_STANDARD 20)

find_package(GTest REQUIRED)

add_library(matrix_lib smart.hpp smart.cpp)

add_executable(smart main.cpp smart.cpp smart.hpp )

target_link_libraries(smart GTest::GTest GTest::Main)

add_compile_options(-Wall -Wextra -Werror -pedantic -pedantic-errors)

target_link_libraries(smart matrix_lib)

add_subdirectory(u_test)

