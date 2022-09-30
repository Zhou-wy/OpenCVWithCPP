cmake_minimum_required(VERSION 3.21)
project(untitled)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/opt/homebrew/Cellar/qt/6.2.2/lib/cmake")
find_package(OpenCV 4.5.5 REQUIRED)
find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)
include_directories(${OpenCV_INCLUDE_DIR})
link_directories(${OpenCV_LIB_DIR})

add_subdirectory(SDK)

OPTION(WITH_LOG "Build with output logs and images in tmp" OFF)
if (WITH_LOG)
    ADD_DEFINITIONS(-DLOG)
ENDIF(WITH_LOG)

add_executable(${PROJECT_NAME}  main.cpp)
target_link_libraries(${PROJECT_NAME}
        Qt::Core
        Qt::Gui
        Qt::Widgets
        ${OpenCV_LIBS}
        SDK
        )

