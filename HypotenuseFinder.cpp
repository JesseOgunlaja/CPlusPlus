#include<iostream>
#include<cmath>

int main()
{

    double a;
    double b;

    std::cout << "Enter the length of a ";
    std::cin >> a;

    std::cout << "Enter the length of b ";
    std::cin >> b;

    double c = sqrt(pow(a,2) + pow(b,2));
    std::cout << "The length of c is " << c;

    return 0;
}
