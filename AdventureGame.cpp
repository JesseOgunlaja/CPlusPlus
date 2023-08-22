#include <iostream>

int main()
{
    std::cout << "You are entering a maze game \n";
    char direction;
    std::cout << "Type L to go left and R to go right ";
    std::cin >> direction;
    if (direction == 'l' || direction == 'L'){
        std::cout << "You went the right way\n"; 
        char weapon;
        std::cout << "You encounter a monster there are two weapons on the floor type w for the wrench s for the sledgehammer ";  
        std::cin >> weapon;
        if(weapon == 'w' || weapon == 'W') {
            std::cout << "As the monster approaches you throw the wrench at it and it dies\n";
            char chest;
            std::cout << "You carry on walking down the path and you find two chests type g for the gold one and s for the silver one ";
            std::cin >> chest;
            if (chest == 's' || chest == 'S'){
                std::cout << "The chest has a lot of gold in it you have now become rich but you still have to die";
                return 0;
            }
            else if (chest == 'g' || chest == 'G'){
                std::cout << "Don't you know g stands for greedy and you die";
                return 0;
            }
            else {
                std::cout << "You didn't pick a chest so you shall now pay the consequences you die";
                return 0;
            }
        }
        else if (weapon == 's' || weapon == 'S'){
            std::cout << "The sledgehammer is to heavy the monster kills you";
            return 0;
        }
        else {
            std::cout << "You don't pick up any weapon and the monster simply kills you";
            return 0;
        }
    }
    else if (direction == 'r' || direction == 'R'){
        std::cout << "You trip on a rock and die";    
        return 0;
    }
    else {
        std::cout << "You didn't type L or R you will now die";
        return 0;
    }
     
    


    return 0;
}