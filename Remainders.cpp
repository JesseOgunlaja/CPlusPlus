#include <iostream>

int main ()
{
    int number;
    std::cout << "Enter a number ";
    std::cin >> number;
    int divide;
    std::cout << "What do you want to divide this number by ";
    std::cin >> divide;
    int answer = number / divide;
    int remainder = number % divide;
    if (remainder == 0) {
        std::cout << number << " divided by " << divide << " is " << answer << " with no remainder";
    }
    else {
        std::cout << number << " divided by " << divide << " is " << answer << " remainder " << remainder;    
    }

    return 0;
}