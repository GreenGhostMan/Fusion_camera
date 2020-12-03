cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

add_definitions(-std=c++11)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

project(camera_fusion)

find_package(OpenCV 4.1 REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})
link_directories(${OpenCV_LIBRARY_DIRS})
add_definitions(${OpenCV_DEFINITIONS})

# Executable for create matrix exercise

add_executable (make_matrix src/make_matrix.cpp)
target_link_libraries (make_matrix ${OpenCV_LIBRARIES})

add_executable (man_matrix src/manipulate_matrix.cpp)
target_link_libraries (man_matrix ${OpenCV_LIBRARIES})

add_executable (load_image src/01_load_image.cpp)
target_link_libraries (load_image ${OpenCV_LIBRARIES})

add_executable (02load_image src/02_load_image.cpp)
target_link_libraries (02load_image ${OpenCV_LIBRARIES})

add_executable (03load_image src/03_load_image.cpp)
target_link_libraries (03load_image ${OpenCV_LIBRARIES})
