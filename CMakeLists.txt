cmake_minimum_required(VERSION 3.10)

project(CppDemo)

add_subdirectory(overload_operator)
add_subdirectory(test)

set(CMAKE_INSTALL_PREFIX "../install")
message(STATUS "install path: ${CMAKE_INSTALL_PREFIX}")
