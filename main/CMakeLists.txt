add_executable(myapp main.c)
target_link_libraries(myapp lib_s)
target_include_directories(myapp PRIVATE ${CMAKE_SOURCE_DIR}/lib-s/include)