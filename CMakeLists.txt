cmake_minimum_required(VERSION 3.16)
project(ExcelMirror CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC on)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(excel_mirror src/main.cpp)
target_link_libraries(excel_mirror PRIVATE Qt6::Widgets)

