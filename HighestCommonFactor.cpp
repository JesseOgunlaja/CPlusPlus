#include <iostream>

int main()
{
    int number1;
    std::cout << "Enter a number.\n";
    std::cin >> number1;
    int number2;
    std::cout << "Enter number.\n";
    std::cin >> number2;
    int x;
    if (number1 > number2) {
        int x = number1 - 1; 
        do {
        if (number1 % x == 0 && number2 % x == 0) {
            std::cout << "The highest common factor of " << number1 << " and " << number2 << " is " << x ;
            return 0;
        }
        else {
            --x;
        }
    }
    while (true);   
    }
    else {
        int x = number2 - 1;  
        do {
        if (number1 % x == 0 && number2 % x == 0) {
            std::cout << "The highest common factor of " << number1 << " and " << number2 << " is " << x ;
            return 0;
        }
        else {
            --x;
        }
    }
    while (true);  
    }
    
}

