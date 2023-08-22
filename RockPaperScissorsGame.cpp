#include <iostream>
#include <ctime>

//Function decleration
char getUserChoice (); 
char getComputerChoice ();
void showChoice (char choice);
void chooseWinner(char player, char computer);

int main (){//Main Function

    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}
char getUserChoice() {//Getting user input

    char player;
    std::cout << "************************\n";
    std::cout << "Rock-Paper-Scissors Game\n";
    std::cout << "************************\n";

    do {
        std::cout << "Chooes one of the following\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";
        std::cin >> player;
    }
    while(player != 'r' && player != 'p' && player != 's');


    return player;
}
char getComputerChoice (){//Getting computer input

    srand(time(NULL));
    int num = rand()% 3 +1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }

    return 0;
}
void showChoice (char choice){//Show computer and user input

    switch(choice){
        case 'r': std::cout << "Rock\n";
                  break;
        case 'p': std::cout << "Paper\n"; 
                  break;
        case 's': std::cout << "Scissors\n";
                  break;
    }

}
void chooseWinner(char player, char computer){//Determines user via switches and if statements

    switch(player){
        case 'r':
                  if (computer == 'r'){
                    std::cout << "It is a draw\n";
                  }
                  if (computer == 'p') {
                    std::cout << "You lose\n";
                  }
                  if (computer == 's'){
                    std:: cout << "You win\n";
                  }
                  break;
        case 'p':
                  if (computer == 'r'){
                    std::cout << "You win\n";
                  }
                  if (computer == 'p'){
                    std::cout << "It's a draw\n";
                  }
                  if (computer == 's'){
                    std::cout << "You lose\n";
                  }
                  break;
        case 's':
                  if (computer == 'r'){
                    std::cout << "You lose\n";
                  }
                  if (computer == 'p'){
                    std::cout << "You win\n";
                  }
                  if (computer == 's'){
                    std::cout << "It's a draw\n";
                  }
    }



}