#include <iostream>
#include <ctime>

int main () {
    int lowest;
    int highest;

    std::cout << "Enter the lowest number ";
    std::cin >> lowest;

    std::cout << "Enter the highest number ";
    std::cin >> highest;



    srand(time(NULL));
    int num;

    do {
        num = rand();        
    }
    while (num < lowest || num > highest);

    std::cout << num;


    return 0;
}