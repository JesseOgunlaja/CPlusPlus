#include <iostream>

int main()
{
    int number;
    std::cout << "Enter a number ";
    std::cin >> number;
    int factors = 0;
    int x = number;
    do {
        if (number % x == 0) {
            factors += 1;
            --x;
        }
        else {
            --x;
        }
    }
    while (x != 0);
    if (factors == 2) {
        std::cout << number << " is a prime number";    
    }
    else {
        std::cout << number << " is not a prime number and must be a composite number";
    }
}



