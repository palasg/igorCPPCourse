#include<gtest/gtest.h>
#include"inc/string_trim.h"


TEST(trim_test, demo_trim_test){
    std::string test_str = " Some string with space ";
    char trim_str = ' ';
    std::string some_string = no_strings_attached::string_trim::Trim(test_str,trim_str,no_strings_attached::string_trim::Side::kBoth);
    ASSERT_EQ(some_string,"Some string with space");
}