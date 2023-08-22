#include <iostream>

int main ()
{
    int number;
    std::cout << "Enter a number ";
    std::cin >> number;
    int divide;
    std::cout << "What do you think that number is divisable by "; 
    std::cin >> divide;
    if (number % divide == 0) {
        std::cout << number << " is divisible by " << divide;
    }
    else {
        std::cout << number << " is not divisible by " << divide;        
    }
}