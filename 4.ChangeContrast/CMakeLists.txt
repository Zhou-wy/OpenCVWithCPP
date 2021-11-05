cmake_minimum_required(VERSION 3.20)
project(4_ChangeContrast)

set(CMAKE_CXX_STANDARD 14)
find_package(OpenCV)
add_executable(4_ChangeContrast main.cpp)
target_link_libraries(4_ChangeContrast ${OpenCV_LIBS})