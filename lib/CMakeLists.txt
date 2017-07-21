cmake_minimum_required(VERSION 3.7)
project(myNetworkLib)

set(CMAKE_CXX_STANDARD 14)

# files for library
file(GLOB LIB_SOURCE_FILES ./*.cpp)
add_library(myNetworkLib SHARED ${LIB_SOURCE_FILES})