add_executable(cpp_ci
		main.cpp catch.hpp factorial.hpp)

add_executable(unit_tests
		unit_testing.cpp catch.hpp factorial.cpp)

set (CMAKE_CXX_FLAGS "-std=c++11")

option(coverage "Compile for code coverage" OFF)

if(coverage)
   MESSAGE(STATUS "Compiling for code coverage.")
   SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
   SET(CMAKE_CXX_OUTPUT_EXTENSION_REPLACE 1)
endif(coverage)
