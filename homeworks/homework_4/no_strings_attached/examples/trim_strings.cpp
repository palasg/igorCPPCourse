#include<iostream>
#include"no_strings_attached/string_trim.h"


int main(){
    std::cout<<"Example program that trims strings.\n";
    std::cout<<"Please enter a string:\n";
    std::string input_str; 
    std::getline(std::cin, input_str);
    char char_1 = ' ';
    input_str = no_strings_attached::Trim::Trim(input_str,char_1,no_strings_attached::Side::kBoth);
    std::cout<<"Your trimmed string: '" <<input_str<<"'"<<std::endl;

    return 0;
}