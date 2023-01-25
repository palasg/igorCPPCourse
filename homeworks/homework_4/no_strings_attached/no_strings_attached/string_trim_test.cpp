#include<gtest/gtest.h>
#include"string_trim.h"


TEST(trim_test, demo_trim_test){
    std::string test_str = " Some string with space ";
    char trim_str = ' ';
    std::string some_string = no_strings_attached::Trim::Trim(test_str,trim_str,no_strings_attached::Trim::Side::kBoth);
    ASSERT_EQ(some_string,"Some string with space");
}