
add_library(split_string split_string.cpp)
target_include_directories(split_string PUBLIC inc)
target_link_libraries(split_string PUBLIC cxx_setup)

if(BUILD_TESTING)
add_executable(split_string_utest split_string_test.cpp split_string.cpp)
target_include_directories(split_string PRIVATE inc)
target_link_libraries(split_string_utest
    PRIVATE GTest::gtest_main
    )
    include(GoogleTest)
    gtest_discover_tests(split_string_utest)
endif()
