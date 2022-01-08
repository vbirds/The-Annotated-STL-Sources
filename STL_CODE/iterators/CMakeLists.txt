cmake_minimum_required(VERSION 2.8)
project(iterators)

add_executable(3find 3find.cpp)
add_executable(3mylist-iter-test algorithm.h 3mylist.h 3mylist-iter.h 3mylist-iter-test.cpp)