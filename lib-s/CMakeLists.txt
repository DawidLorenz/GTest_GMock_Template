cmake_minimum_required(VERSION 3.5)
project(lib_s)

set(LIB_SOURCE_FILES
    src/your_code_static.c include/your_code_static.h
    src/your_code_static_parent.c include/your_code_static_parent.h)
add_library(lib_s STATIC ${LIB_SOURCE_FILES})