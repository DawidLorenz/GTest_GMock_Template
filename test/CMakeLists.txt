cmake_minimum_required(VERSION 3.10)
project(MyProjectTests)

find_library(GTest NAMES gtest googletest)
if (${GTest} STREQUAL "GTest-NOTFOUND")
  message(FATAL_ERROR "GTest not found")
else()
  message("GTest found ${GTest}")
  find_path(GTEST_INCLUDE_DIRS NAMES "gtest.h"
    HINTS
     $ENV{GTEST_INC_ROOT}
      /usr/src/googletest/googletest/include/gtest/
  )
  message("GTest include: ${GTEST_INCLUDE_DIRS}")
endif()
find_library(GMock NAMES gmock_main
                          libgmock_main
                          libgmock_main.a)
if (${GMock} STREQUAL "GMock-NOTFOUND")
  message(FATAL_ERROR "GMock not found")
else()
  message("GMock found ${GMock}")
  find_path(GMOCK_INCLUDE_DIRS NAMES "gmock.h"
    HINTS
     $ENV{GMOCK_INC_ROOT}
      /usr/src/googletest/googlemock/include/gmock/
  )
  message("GMock include: ${GMOCK_INCLUDE_DIRS}")
endif()


# https://github.com/meekrosoft/fff/blob/master/examples/weak_linking/CMakeLists.txt

# Create an executable for the tests
add_executable(test_mylib test_main.cpp your_code_fff.hpp your_code_fff.cpp your_code_test_parent.cpp your_code_test.cpp)
target_link_libraries(test_mylib gtest gmock lib_d)
target_include_directories(test_mylib PRIVATE ${CMAKE_SOURCE_DIR}/lib-d/include ${CMAKE_SOURCE_DIR}/lib-d ${CMAKE_SOURCE_DIR}/fff)

# Add the tests to CTest
include(GoogleTest)
gtest_discover_tests(test_mylib)



