
add_library(string_split split_string.cpp)
target_include_directories(string_split PUBLIC inc)
target_link_libraries(string_split PUBLIC cxx_setup)

add_library(string_trim string_trim.cpp)
target_include_directories(string_trim PUBLIC inc)
target_link_libraries(string_trim PUBLIC cxx_setup)

if(BUILD_TESTING)
add_executable(string_split_utest split_string_test.cpp)
target_include_directories(string_split_utest PRIVATE inc)
target_link_libraries(string_split_utest
    PRIVATE string_split
    PRIVATE GTest::gtest_main
    )
    include(GoogleTest)
    gtest_discover_tests(string_split_utest)
add_executable(string_trim_utest string_trim_test.cpp string_trim.cpp)
target_include_directories(string_trim_utest PRIVATE inc)
target_link_libraries(string_trim_utest
PRIVATE GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(string_trim_utest)
endif()
