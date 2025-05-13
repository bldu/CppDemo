file(GLOB SOURCES "src/*.cpp")
get_filename_component(LIBNAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
add_library(${LIBNAME} STATIC ${SOURCES})
target_include_directories(${LIBNAME} PUBLIC "./include")

include(GNUInstallDirs)
install(TARGETS ${LIBNAME}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}   # 可执行文件
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}   # 共享库（.so/.dll）
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}   # 静态库（.a）
)

install(DIRECTORY ./include/
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${LIBNAME}
)

# install(DIRECTORY ./
#     DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/overload_operator
#     FILES_MATCHING
#     PATTERN "*.h"
#     PATTERN "*.hpp"
#     # PATTERN "*.c" EXCLUDE  # 排除源文件
# )
