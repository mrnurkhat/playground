cmake_minimum_required(VERSION 3.20)
project(cicd)

set(CMAKE_CXX_STANDARD 17)

add_executable(cicd_target src/main.cpp src/funs.cpp)
add_executable(test_target src/funs.cpp tests/funs_test.cpp)

enable_testing()
add_test(
	NAME MY_CTEST
	COMMAND test_target --test
)
