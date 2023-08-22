#include <iostream>

int main ()
{
    int number;
    std::cout << "Enter a number ";
    std::cin >> number;
    int x = number;
    do {
        if (number % x == 0) {
            std::cout << x << "\n";
            x--;
        }
        else {
            x--;
        }
    }
    while (x != 0);
}
