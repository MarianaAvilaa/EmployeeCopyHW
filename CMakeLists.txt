cmake_minimum_required(VERSION 3.21)
project(Employee)

set(CMAKE_CXX_STANDARD 14)

add_executable(Employee main.cpp Employee.cpp Employee.h McDonaldWorker.cpp McDonaldWorker.h)
