#include <iostream>
#include <cmath>

int main()
{
    double a;
    double c;

    std::cout << "What is the length of c ";
    std::cin >> c;

    std::cout << "What is the length of a ";
    std::cin >> a;

    double b = sqrt(pow(c,2) - pow(a,2));
    std::cout << b;

    return 0;
}