#include<iostream>
#include"no_strings_attached/string_split.h"

int main(){
    std::cout<<"Example program that splits strings.\n";
    std::cout<<"Please enter a string:\n";
    std::string input_str; 
    std::string delim=" ";
    std::getline(std::cin, input_str);
    //std::cin>> input_str; 
    //std::cout<<"The given string is: " << input_str<<std::endl;
    std::vector<std::string> result = no_strings_attached::Split::Split(input_str, delim);
    std::cout<<"Your split string:";
    for (auto& each_split : result)
    {
        std::cout<<" '"<<each_split<<"'";
    }
    
    return 0;
}