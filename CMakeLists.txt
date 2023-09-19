cmake_minimum_required(VERSION 3.0.0)
project(opencv_examples VERSION 0.1.0)

include(CTest)
enable_testing()

set(OpenCV_DIR C:\\opencv\\opencv\\build)

find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )

#add_executable(opencv_examples main.cpp)
add_executable(opencv_image image.cpp)

target_link_libraries( opencv_image ${OpenCV_LIBS} )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
