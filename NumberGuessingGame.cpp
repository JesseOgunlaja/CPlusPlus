#include <iostream>
#include <ctime>

int main ()
{
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = rand()% 100 +1;

    std::cout << "*********** NUMBER GUESSING GAME ***********\n";
    
    do{
        std::cout << "Enter a number between (1-100) ";
        std::cin >> guess;
        tries++;

        if (guess > num) {
            std::cout << "Your number is too big\n";
        }
        else if (guess < num) {
            std::cout << "Your number is too small\n";        
        }
        else {
            std::cout << "You guessed the correct number in " << tries << " tries";
        }
    }
    while (guess != num);

    return 0;
}