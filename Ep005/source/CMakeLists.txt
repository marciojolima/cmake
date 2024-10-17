cmake_minimum_required(VERSION 3.5)
project(
    HelloApp
    VERSION 0.0.1
    DESCRIPTION "The leading Hello App"
    LANGUAGES CXX
)

#GLOBING
#Some reading: https://stackoverflow.com/a/1060061
file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
add_executable(HelloBinary main.cpp ${SOURCE_FILES})

#List your sources
#add_executable(
#    HelloBinary main.cpp
#    src/dog.cpp src/operations.cpp
#)

target_compile_features(HelloBinary PRIVATE cxx_std_20)
target_include_directories(HelloBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)