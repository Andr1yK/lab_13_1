cmake_minimum_required(VERSION 3.14)
project(ap_lab)

set(CMAKE_CXX_STANDARD 11)

set(CFLAGS -c -Wall -Iinclude)

add_executable(
  demo
  src/main.cpp
  src/extends/var.h
  src/extends/var.cpp
  src/extends/dod.h
  src/extends/dod.cpp
  src/extends/sum.h
  src/extends/sum.cpp
)

add_subdirectory(
  "${CMAKE_CURRENT_SOURCE_DIR}/gtest"
  gtest
)

enable_testing()

add_executable(
  unittest
  test/unittest.cpp
  src/extends/var.h
  src/extends/var.cpp
  src/extends/dod.h
  src/extends/dod.cpp
  src/extends/sum.h
  src/extends/sum.cpp
)

target_link_libraries(
  unittest
  gtest gtest_main
)
