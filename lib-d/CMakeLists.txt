cmake_minimum_required(VERSION 3.5)
project(lib_d)

set(LIB_SOURCE_FILES
    src/your_code_dynamic.c include/your_code_dynamic.h
    src/your_code_dynamic_parent.c include/your_code_dynamic_parent.h)
add_library(lib_d SHARED ${LIB_SOURCE_FILES})