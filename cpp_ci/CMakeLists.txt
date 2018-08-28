add_executable(cpp_ci
		main.cpp catch.hpp factorial.hpp)

add_executable(unit_tests
		unit_testing.cpp catch.hpp factorial.cpp)

set (CMAKE_CXX_FLAGS "-std=c++11")
