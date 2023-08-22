#include <iostream>

int main()
{
    int num;

    std::cout << "Enter a number ";
    std::cin >> num;
    int x = 1;

    while(x != num){
        if(num % x == 0){
            std::cout << x << "    ";
            x++;
        }
        else{
            x++;
        }
    }


    return 0;
}