cmake_minimum_required(VERSION 3.7)
project(Server)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_SKIP_BUILD_RPATH FALSE)
set(CMAKE_BUILD_WITH_INSTALL_RPATH FALSE)
set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)

file(GLOB BIN_SOURCE_FILES ./*.cpp)
add_executable(Server ${BIN_SOURCE_FILES})
target_link_libraries(Server myNetworkLib)