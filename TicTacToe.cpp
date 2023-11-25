#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void userGo(char *spaces);
void computerGo(char *spaces);
bool checkWin(char *spaces);
bool checkTie(char *spaces);

int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    bool running = true;

    drawBoard(spaces);
    while (running)
    {
        userGo(spaces);
        if (checkWin(spaces))
        {
            running = false;
            break;
        }
        else if (checkTie(spaces))
        {
            running = false;
            break;
        }

        computerGo(spaces);
        if (checkWin(spaces))
        {
            running = false;
            break;
        }
        else if (checkTie(spaces))
        {
            running = false;
            break;
        }
        else
        {
            drawBoard(spaces);
        }
    }

    return 0;
}

void drawBoard(char *spaces)
{
    std::cout << "     |     |"
              << "\n";
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "\n";
    std::cout << "_____|_____|_____"
              << "\n";
    std::cout << "     |     |"
              << "\n";
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "\n";
    std::cout << "_____|_____|_____"
              << "\n";
    std::cout << "     |     |"
              << "\n";
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "\n";
    std::cout << "     |     |"
              << "\n"
              << "\n";
}

void userGo(char *spaces)
{
    int square;

    do
    {
        std::cout << "Enter a number from (1-9) ";
        std::cin >> square;
        square--;
        if (spaces[square] == ' ')
        {
            spaces[square] = 'O';
            break;
        }
    } while (square < 1 || square < 10);
}

void computerGo(char *spaces)
{
    int square;
    srand(time(0));

    while (true)
    {
        square = rand() % 9;
        if (spaces[square] == ' ')
        {
            spaces[square] = 'X';
            break;
        }
    }
}

bool checkWin(char *spaces)
{
    if (spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2])
    {
        drawBoard(spaces);
        spaces[0] == 'O' ? std::cout << "YOU WIN"
                                     << "\n"
                         : std::cout << "YOU LOSE"
                                     << "\n";
        return true;
    }
    else if (spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5])
    {
        drawBoard(spaces);
        spaces[3] == 'O' ? std::cout << "YOU WIN"
                                     << "\n"
                         : std::cout << "YOU LOSE"
                                     << "\n";
        return true;
    }
    else if (spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8])
    {
        drawBoard(spaces);
        spaces[6] == 'O' ? std::cout << "YOU WIN"
                                     << "\n"
                         : std::cout << "YOU LOSE"
                                     << "\n";
        return true;
    }
    else if (spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6])
    {
        spaces[0] == 'O' ? std::cout << "YOU WIN"
                                     << "\n"
                         : std::cout << "YOU LOSE"
                                     << "\n";
        drawBoard(spaces);
        return true;
    }
    else if (spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7])
    {
        drawBoard(spaces);
        spaces[1] == 'O' ? std::cout << "YOU WIN"
                                     << "\n"
                         : std::cout << "YOU LOSE"
                                     << "\n";
        return true;
    }
    else if (spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8])
    {
        drawBoard(spaces);
        spaces[2] == 'O' ? std::cout << "YOU WIN"
                                     << "\n"
                         : std::cout << "YOU LOSE"
                                     << "\n";
        return true;
    }
    else if (spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8])
    {
        drawBoard(spaces);
        spaces[0] == 'O' ? std::cout << "YOU WIN"
                                     << "\n"
                         : std::cout << "YOU LOSE"
                                     << "\n";
        return true;
    }
    else if (spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6])
    {
        drawBoard(spaces);
        spaces[2] == 'O' ? std::cout << "YOU WIN"
                                     << "\n"
                         : std::cout << "YOU LOSE"
                                     << "\n";
        return true;
    }
    return false;
}

bool checkTie(char *spaces)
{
    for (int i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
        {
            return false;
        }
    }
    drawBoard(spaces);
    std::cout << "IT'S  A TIE"
              << "\n";
    return true;
}