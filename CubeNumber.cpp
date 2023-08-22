#include <iostream>
#include <cmath>

int main()
{
    int number;
    std::cout << "Enter a number ";
    std::cin >> number;
    int cube = pow(number,3);
    std::cout << "The cube of " << number << " is " << cube;
    return 0;
}

