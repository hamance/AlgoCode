cmake_minimum_required(VERSION 3.6)
project(Algorithm)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp leetCode/lcmain.cpp DataStructure/dsMain.cpp lintCode/lccmain.cpp DataStructure/kdTree/kdTree.cpp DataStructure/kdTree/kdTree.h method/mMain.cpp method/getMidNum.cpp method/getMidNum.h DataStructure/daMain.h leetCode/lcmain.h lintCode/lccmain.h method/mMain.h)
add_executable(Algorithm ${SOURCE_FILES} )