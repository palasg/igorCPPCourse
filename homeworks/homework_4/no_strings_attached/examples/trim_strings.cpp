#include<iostream>
#include"string_trim.h"


int main(){
    std::string str= "This is an exampleTTTTTT";
    char char_1 = 'T';
    std::cout<<"The original string:" <<str<<std::endl;
    std::string after_trim = no_strings_attached::string_trim::Trim(str,char_1,no_strings_attached::string_trim::Side::kBoth);
    std::cout<<"After trim:" <<after_trim<<"\n";

    return 0;
}