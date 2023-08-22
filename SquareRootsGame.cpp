#include <iostream>
#include <ctime>
#include <cmath>

int main()
{
    srand(time(NULL));
    int x = rand()% 40 +41;
    int num = pow(x,2);

    int guess;
    std::cout << "What's the square root of " << num << " ";
    std::cin >> guess;
    if(guess == x){
        std::cout << "The square root of " << num << " is " << x << " you are correct";
    }
    else{
        std::cout << "The square root of " << num << " is " << x << " you are wrong";
    }

    return 0;
}