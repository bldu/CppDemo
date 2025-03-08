cmake_minimum_required(VERSION 3.10)

project(CppDemo)

# 设置编译选项
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(overload_operator)


# 添加测试目录（需放在所有子项目之后）
enable_testing()
add_subdirectory(test)

set(CMAKE_INSTALL_PREFIX "../install")
message(STATUS "install path: ${CMAKE_INSTALL_PREFIX}")
