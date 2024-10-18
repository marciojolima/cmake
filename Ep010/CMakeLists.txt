cmake_minimum_required(VERSION 3.10)

project(rooster)

#the math library
add_subdirectory(src/math)

#the stats library
add_subdirectory(src/stats)

#the main target
add_executable(rooster src/main.cpp)
target_link_libraries(rooster PUBLIC libstats)