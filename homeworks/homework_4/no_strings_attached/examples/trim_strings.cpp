#include<iostream>
#include"string_trim.h"


int main(){
    std::string str= "This is an exampleT";
    char char_1 = 'T';
    std::cout<<"The original string:" <<str<<std::endl;
    str = no_strings_attached::string_trim::Trim(str,char_1,no_strings_attached::string_trim::Side::kBoth);
    std::cout<<"After trim:" <<str;
    return 0;
}