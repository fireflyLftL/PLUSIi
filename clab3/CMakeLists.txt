cmake_minimum_required(VERSION 3.10)
project(clab3)

find_package(Catch2 3 REQUIRED)

add_executable(clab3 clab3.cpp tests.cpp)
target_link_libraries(clab3 PRIVATE Catch2::Catch2WithMain)