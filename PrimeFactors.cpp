#include <iostream>

int main()
{
    int num;
    std::cout << "Enter a number ";
    std::cin >> num;
    int x = 2;
    std::cout << "The prime factors of " << num << " are \n";
    while (num != 1) {
        if (num % x == 0) {
            std::cout << x << "    ";
            num = num / x;
        }
        else {
            x++;
        }
    }
    return 0;
}
