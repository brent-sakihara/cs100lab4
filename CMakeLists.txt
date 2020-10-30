cmake_minimum_required(VERSION 2.8)

add_subdirectory(googletest)

set(CMAKE_CXX_STANDARD 11)

add_executable(test
	unit_test.cpp
	op.cpp
	rand.cpp
	pow.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
