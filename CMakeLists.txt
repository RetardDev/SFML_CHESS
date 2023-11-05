cmake_minimum_required(VERSION 3.26)
project(SFML_CHESS)

set(CMAKE_CXX_STANDARD 17)
find_package(SFML 2.5 COMPONENTS graphics audio)
add_executable(SFML_CHESS main.cpp
        GameEngine.h
        GameEngine.cpp)

target_link_libraries(SFML_CHESS sfml-graphics sfml-audio)
