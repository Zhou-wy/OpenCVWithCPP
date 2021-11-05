cmake_minimum_required(VERSION 3.20)
project(2_VideoCapture)

set(CMAKE_CXX_STANDARD 14)
find_package(OpenCV)
INCLUDE_DIRECTORIES(${OpenCV_INCLUDE_DIRS})
INCLUDE_DIRECTORIES(SYSTEM${CMAKE_CURRENT_SOURCE_DIR}/)
add_executable(2_VideoCapture main.cpp)
target_link_libraries(2_VideoCapture ${OpenCV_LIBS})
