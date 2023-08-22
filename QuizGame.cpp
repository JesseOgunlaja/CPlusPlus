#include <iostream>

int main()
{
    std::string questions[] =   {"1. Which month is my birthday in?: ",
                                "2. What is my favourite snack?: ",
                                "3. Which programming language have I not learnt properly?: ",
                                "4. What is my favourite book series?: "};

    std::string options[][4] =  {{"A. July", "B. August", "C. June", "D. March"},
                                {"A. MAOAM", "B. Strawberry laces", "C. Crisps", "D. Biscuits"},
                                {"A. SQL", "B. C++", "C. HTML", "D. CSS"},
                                {"A. Harry Potter", "B. Keeper of the lost citites", "C. Skulduggery Pleasant", "D. Alex Rider"}};

    char answerKey[] = {'C', 'B', 'A', 'D'};

    int size = sizeof(questions)/ sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0; i < size; i++){
        std::cout << "************************************************************\n";
        std::cout << questions[i] << '\n';
        std::cout << "************************************************************\n";

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << '\n';
        }
        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout << "CORRECT\n";
            score++;
        }
        else {
           std::cout << "WRONG\n"; 
           std::cout << "Answer: " << answerKey[i] << '\n';
        }
    }
    std::cout << "************************************************************\n";
    std::cout << "                      RESULTS\n";
    std::cout << "************************************************************\n";
    std::cout << "CORRECT GUESSES: " << score << '\n';
    std::cout << "# of QUESTIONS: " << size << '\n';
    std::cout << "Score: " << (score/(double)size) * 100 << "%";

    return 0;
}