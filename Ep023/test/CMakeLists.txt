# ${CMAKE_SOURCE_DIR}/cmake/AddGoogleTest
include(AddCatch2)

add_executable(
  unit_tests
  test_calc.cpp
)
target_link_libraries(
  unit_tests PRIVATE calculator Catch2::Catch2WithMain #this name is in the documetation
)

include(CTest)
include(Catch)
catch_discover_tests(unit_tests)