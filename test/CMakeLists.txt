# 查找所有测试源文件
file(GLOB TEST_SOURCES "*.cpp")

foreach(test_src ${TEST_SOURCES})
    # 提取测试名（假设文件名格式为 test_subproject1.cpp）
    get_filename_component(test_name ${test_src} NAME_WE)
    string(REPLACE "test_" "" target_name ${test_name})

    # 创建可执行文件
    add_executable(${test_name} ${test_src})

    # 链接对应的子项目库
    target_link_libraries(${test_name}
        ${target_name}  # 假设子项目名与测试目标名对应
        )

    # # 添加测试用例
    # add_test(NAME ${test_name}
    #          COMMAND ${test_name}
    #          WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
endforeach()
