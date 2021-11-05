cmake_minimum_required(VERSION 3.20)
project(1_HelloOpencv)

set(CMAKE_CXX_STANDARD 14)
find_package(OpenCV)
include_directories(${OpenCV_INCLUDE_DIRS})
INCLUDE_DIRECTORIES(SYSTEM 　${CMAKE_CURRENT_SOURCE_DIR}/)
add_executable(1_HelloOpencv main.cpp)
target_link_libraries(1_HelloOpencv ${OpenCV_LIBS})
