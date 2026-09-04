cmake_minimum_required(VERSION 3.20)
project(cicd)

set(CMAKE_CXX_STANDARD 17)

add_executable(cicd_target src/main.cpp src/funs.cpp)
add_executable(test_target src/funs.cpp tests/funs_test.cpp)

enable_testing()
add_test(NAME odd_pos COMMAND test_target 5)
add_test(NAME even_neg COMMAND test_target -4)
add_test(NAME even_zero COMMAND test_targ 0)
