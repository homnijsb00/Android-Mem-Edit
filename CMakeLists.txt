cmake_minimum_required(VERSION 3.15)
project(memedit_project LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 输出目录：让 .so 直接生成在构建目录，便于上传
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# 列出库源文件：根据你的实际源码调整路径和文件名
set(MEMEDIT_SOURCES
    src/libmemedit.cpp
    # src/other_source.cpp
)

# 生成共享库 libmemedit.so
add_library(memedit SHARED ${MEMEDIT_SOURCES})

# 如需链接 Android 平台库，取消下面注释并根据需要修改
# find_library(LOG_LIB log)
# target_link_libraries(memedit PUBLIC ${LOG_LIB})
