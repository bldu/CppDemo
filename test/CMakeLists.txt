
add_executable(test_ops test_overload_operator.cpp)
target_include_directories(test_ops PRIVATE ${CMAKE_SOURCE_DIR}/overload_operator)
target_link_directories(test_ops PRIVATE ${CMAKE_BINARY_DIR}/overload_operator)
target_link_libraries(test_ops ops)