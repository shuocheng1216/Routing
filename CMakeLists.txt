cmake_minimum_required (VERSION 2.8)
set(CMAKE_CXX_STANDARD 11)
# 项目信息

project (Demo3)

# 查找当前目录下的所有源文件

# 并将名称保存到 DIR_SRCS 变量

aux_source_directory(. DIR_SRCS)

# 添加 math 子目录

add_subdirectory(topo_graph)
add_subdirectory(strategy)

find_package(Protobuf REQUIRED)
if(PROTOBUF_FOUND)
   message(STATUS "protobuf library found")
else()
    message(FATAL_ERROR "protobuf library is needed but cant be found")
endif()
include_directories(${PROTOBUF_INCLUDE_DIRS})
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})

find_package(gflags REQUIRED)
find_package (glog)

add_executable(Demo ${DIR_SRCS})

target_link_libraries(Demo gflags)
target_link_libraries (Demo glog)
# 指定生成目标


# 添加链接库

target_link_libraries(Demo Graph)
target_link_libraries(Demo AStar)
target_link_libraries(Demo ${PROTOBUF_LIBRARIES})
