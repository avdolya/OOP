cmake_minimum_required(VERSION 3.10)
project(laba_1)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.15.2
)
FetchContent_MakeAvailable(googletest)


add_executable(laba_1 src/main.cpp src/closest_pair_tonum.cpp)

add_executable(tests tests/tests.cpp src/closest_pair_tonum.cpp)

target_link_libraries(tests gtest_main)