#include<gtest/gtest.h>
#include"split_string.h"

TEST(Split_string, demo_test){
    std::vector<std::string> result = no_strings_attached::split_string::Split("Hello World"," ");
    ASSERT_EQ(result[0],"Hello");
    ASSERT_EQ(result[1],"World");
    std::vector<std::string> result_1 = no_strings_attached::split_string::Split("Hell o world"," ",1);
    ASSERT_EQ(result_1.size(),1);
    ASSERT_EQ(result_1[0],"Hell");


}
