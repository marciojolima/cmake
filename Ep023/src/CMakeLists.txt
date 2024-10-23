#target calculator (library is a type of target)
add_library(calculator calculator.cpp)
target_include_directories(calculator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})