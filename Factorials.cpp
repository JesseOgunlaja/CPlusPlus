#include <iostream>

int main()
{
    int number;
    std::cout << "Enter a number ";
    std::cin >> number;
    int x = 1;
    int factorial = 1;
    do {
        x += 1;
        factorial *= x;
    }
    while (x != number);
    std::cout << "The factorial of " << number << " is " << factorial ;
    return 0;
}
