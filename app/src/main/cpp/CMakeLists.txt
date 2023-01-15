cmake_minimum_required(VERSION 3.10.2)
project("myffmpeg")
add_library(
        native-lib
        SHARED
        native-lib.cpp)
#1.引入头文件
include_directories(${CMAKE_SOURCE_DIR}/include)
#2.引入库文件
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -L${CMAKE_SOURCE_DIR}/${CMAKE_ANDROID_ARCH_ABI}")
find_library(
        log-lib
        log)


target_link_libraries(
        native-lib
        avformat avcodec avfilter avutil swresample swscale
#        avformat
        ${log-lib})