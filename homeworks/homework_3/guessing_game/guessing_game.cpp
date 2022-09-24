#include<iostream>

const int generateRandomNum(){
    return 0;
}

int main(){

std::cout <<"Welcome to the GUESSING GAME!\n";
std::cout<<"I will generate a number and you will guess it!\n";
std::cout <<"Please provide the smallest number: "<<std::endl;
int smallest_num;
int largest_num;
std::cin>> smallest_num;

std::cout <<"Please provide the largest number:"<<std::endl; 
std::cin>> largest_num;

int randon_num = generateRandomNum();

std::cout << "I've generated a number. Try to guess it!" <<std::endl;


    return 0;
}