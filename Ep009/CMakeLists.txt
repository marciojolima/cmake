cmake_minimum_required(VERSION 3.10)

project(rooster)

#the math library
include(src/math/math.cmake)

#the stats library
include(src/stats/stats.cmake)

#the main target
add_executable(rooster src/main.cpp)
target_link_libraries(rooster PUBLIC libstats)