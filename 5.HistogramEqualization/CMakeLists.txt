cmake_minimum_required(VERSION 3.20)
project(5_HistogramEqualization)

set(CMAKE_CXX_STANDARD 14)
find_package(OpenCV)
add_executable(5_HistogramEqualization main.cpp)
target_link_libraries(5_HistogramEqualization ${OpenCV_LIBS})

