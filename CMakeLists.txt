cmake_minimum_required(VERSION 3.28)
project(Library_Management_System)

set(CMAKE_CXX_STANDARD 17)

add_executable(Library_Management_System src/main.cpp
        src/Book.cpp
        include/Book.h
        src/Library.cpp
        include/Library.h
        src/FictionBook.cpp
        include/FictionBook.h)
