cmake_minimum_required(VERSION 3.24)
project(Final_project)

set(CMAKE_CXX_STANDARD 23)

add_executable(Final_project main.cpp Persons/Person.cpp Persons/Person.h JSONWork.cpp JSONWork.h Persons/PersonException.cpp Persons/PersonException.h nlohmann)
