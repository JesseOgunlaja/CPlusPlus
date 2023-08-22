#include <iostream>
#include <cmath>

int main()
{
    int number;
    std::cout << "Enter a number ";
    std::cin >> number;
    int square = pow(number,2);
    std::cout << "The square of " << number << " is " << square;
    return 0;
}

