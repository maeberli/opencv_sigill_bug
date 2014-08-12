cmake_minimum_required (VERSION 2.8)
project (opencv_sigill_bug)

find_package( OpenCV REQUIRED )

if(CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "-std=c++0x ${CMAKE_CXX_FLAGS}")
endif()

set(BIN_NAME "opencv_sigill_bug")

FILE(GLOB MAIN_SRC "main.cpp")

add_executable (${BIN_NAME} ${MAIN_SRC})
target_link_libraries(${BIN_NAME} ${OpenCV_LIBS})
