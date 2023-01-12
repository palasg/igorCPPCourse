#include<iostream>
#include"../no_strings_attached/inc/split_string.h"

int main(){
    std::cout<<"Example program that splits strings. \n";
    std::cout<<"Please enter a string:\n";
    std::string input_str; 
    std::string delim=" ";
    std::getline(std::cin, input_str);
    //std::cin>> input_str; 
    //std::cout<<"The given string is: " << input_str<<std::endl;
    std::vector<std::string> result = no_strings_attached::split_string::split_string(input_str, delim);
    for (auto& each_split : result)
    {
        std::cout<<each_split<<std::endl;
    }
    
    return 0;
}