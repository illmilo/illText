cmake_minimum_required(VERSION 3.28)
project(illText)

set(CMAKE_CXX_COMPILER "/usr/bin/clang++")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(illText main.cpp
        illtext.cpp
        illtext.h
        illtext.ui
)
target_link_libraries(illText
        Qt::Core
        Qt::Gui
        Qt::Widgets
)

