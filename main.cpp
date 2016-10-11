#include <iostream>
#include <string>
#include <time.h>

int main(int argc, char *argv[])
{
    std::cout << "Hello it's Rock,Paper,Scissors game" << std::endl;
    std::cout << "Rock < Paper < Scissors < Rock\n";
    std::cout << "Enter your choice:";
    std::string userChoice;
    std::cin >> userChoice;

    srand(time(NULL));
    int compChoice;
    compChoice = rand()% 3 + 1;
    std::string word[3] = {"Rock","Paper","Scissors"};
    std::cout << "Computer choice was:" << word[compChoice - 1] << std::endl;

    if((userChoice == "Rock") && (compChoice == 2)||
       (userChoice == "Paper") && (compChoice == 3)||
       (userChoice == "Scissors") && (compChoice == 1))
    {
        std::cout << "You lose" << std::endl;
    }

    else if((userChoice == "Rock") && (compChoice == 3)||
       (userChoice == "Paper") && (compChoice == 1)||
       (userChoice == "Scissors") && (compChoice == 2))
    {
        std::cout << "You win" << std::endl;
    }

    else if((userChoice == "Rock") && (compChoice == 1)||
            (userChoice == "Paper") && (compChoice == 2)||
            (userChoice == "Scissors") && (compChoice == 3))
         {
             std::cout << "Draw" << std::endl;
         }
    return 0;
}
