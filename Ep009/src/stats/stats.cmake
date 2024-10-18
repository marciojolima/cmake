add_library(libstats STATIC src/stats/stats.cpp)
target_include_directories(libstats PUBLIC src/stats/include)
target_link_libraries(libstats PRIVATE libmath)