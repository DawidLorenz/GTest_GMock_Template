cmake_minimum_required(VERSION 3.10)
project(Example)

add_subdirectory(fff)

set(CMAKE_THREAD_LIBS_INIT "-lpthread")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

add_subdirectory(lib-d)
#add_subdirectory(lib-s)
#add_subdirectory(main)

enable_testing()
add_subdirectory(test)