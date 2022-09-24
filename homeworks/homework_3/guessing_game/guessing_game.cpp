#include<iostream>
#include<random>
const int generateRandomNum(const float min, const float max){
/*
* create random device
* pass this device to an random number generator engine
* pass this engine to an distribution pattern (for this case its uniform distribution)
*/

std::random_device random_dv;
std::mt19937 random_engine{random_dv()};
std::uniform_real_distribution<float>distribution{min,max};
return distribution(random_engine);
}

int main(){

std::cout <<"Welcome to the GUESSING GAME!\n";
std::cout<<"I will generate a number and you will guess it!\n";
std::cout <<"Please provide the smallest number: "<<std::endl;
int smallest_num;
int largest_num;
int user_guess;
std::cin>> smallest_num;

std::cout <<"Please provide the largest number: "<<std::endl; 
std::cin>> largest_num;

int randon_num = generateRandomNum(smallest_num, largest_num);

std::cout << "I've generated a number. Try to guess it!" <<std::endl;

std::cin>> user_guess;

std::size_t counter=0;

bool is_guess_correct = false;

std::cout << "Largest and smallest num " <<largest_num <<smallest_num<<std::endl;
std::cout << "Usr guessed and random " << user_guess <<randon_num <<std::endl;


while (!is_guess_correct)

{
    counter++;
    if(user_guess > randon_num)
    {
        std::cout <<"Your number is too big. Try again!" <<std::endl;
        std::cin >> user_guess;
    }
    else if (user_guess < randon_num)
    {
        std::cout <<"Your number is too small. Try again!" <<std::endl;
        std::cin >> user_guess;
    }
    else
    {
        std::cout <<"You've done it! You guessed the number "<< randon_num<<" in"<< counter<<" guesses!"<<std::endl;
        is_guess_correct  = true;
    }
    
}

    return 0;
}