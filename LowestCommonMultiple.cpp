#include <iostream>

int main()
{
    int number1;
    std::cout << "Enter a positive number.\n";
    std::cin >> number1;
    int number2;
    std::cout << "Enter another positive number.\n";
    std::cin >> number2;
    int x = 1;
    do {
        if ((number1 * x) % number2 == 0) {
            std::cout << "The lowest common multiple of " << number1 << " and " << number2 << " is " << number1 * x;
            return 0;
        }
        else {
            x++;
        }
    }
    while (true);
}
