cmake_minimum_required(VERSION 3.10)
project(clab3g)

include(FetchContent)
FetchContent_Declare(googletest URL https://github.com/google/googletest/archive/refs/heads/main.zip)
FetchContent_MakeAvailable(googletest)

add_executable(clab3g clab3g.cpp testsg.cpp)

target_link_libraries(clab3g PRIVATE GTest::gtest_main)

enable_testing()

include(GoogleTest)
gtest_discover_tests(clab3g)