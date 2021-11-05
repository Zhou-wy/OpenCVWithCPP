cmake_minimum_required(VERSION 3.20)
project(3_ChangeBrightness)

set(CMAKE_CXX_STANDARD 14)
find_package(OpenCV)
add_executable(3_ChangeBrightness main.cpp)
target_link_libraries(3_ChangeBrightness ${OpenCV_LIBS})
