#include <iostream>
#include <cmath>
int main ()
{
    int num;
    std::cout << "Enter a number ";
    std::cin >> num;
    int power;
    std::cout << "What do you want this number to the power of ";
    std::cin >> power;
    int answer = pow(num,power);
    std::cout << num << " To the power of " << power << " = " << answer;
    return 0;
}