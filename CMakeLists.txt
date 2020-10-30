
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(lab
	main.cpp
	op.cpp
	rand.cpp
	pow.cpp
	mult.cpp
	div.cpp
	add.cpp
	sub.cpp
)

TARGET_LINK_LIBRARIES(lab gtest)
TARGET_COMPILE_DEFINITIONS(lab PRIVATE gtest_disable_pthreads=ON)
