#include <iostream>

int main ()
{
    char temp;
    std::cout << "Type c for celsius to fahrenheit and f for fahrenheit to celsius ";
    std::cin >> temp;
    int temperature;
    std::cout << "TYpe in the temperature ";
    std::cin >> temperature;
    if (temp == 'c') {
        int answer = temperature * 9 / 5 + 32;
        std::cout << (double)answer << " fahrenheit";
    }
    else {
        int answer = (temperature - 32) * 5 / 9 ;
        std::cout << (double)answer << " celsius";
    }

    return 0;
}