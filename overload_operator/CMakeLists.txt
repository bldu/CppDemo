add_library(ops STATIC ops.cpp)
target_include_directories(ops PRIVATE "./")

include(GNUInstallDirs)
install(TARGETS ops
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}   # 可执行文件
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}   # 共享库（.so/.dll）
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}   # 静态库（.a）
)

install(DIRECTORY ./
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/overload_operator
    FILES_MATCHING
    PATTERN "*.h"
    PATTERN "*.hpp"
    # PATTERN "*.c" EXCLUDE  # 排除源文件
)
