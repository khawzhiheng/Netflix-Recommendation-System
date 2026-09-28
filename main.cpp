#include <iostream>
#include <sstream>
#include <string>

void runProgram();

void displayMenu()
{
    std::cout << "\n========== Movie Menu ==========\n";
    std::cout << "1. Action\n";
    std::cout << "2. Comedy\n";
    std::cout << "3. Horror\n";
    std::cout << "4. Exit\n";
}

int readGenre()
{
    std::string input;

    while (true)
    {
        displayMenu();
        std::cout << "Enter your choice (1-4): ";

        if (!std::getline(std::cin, input))
        {
            return 4;
        }

        std::istringstream inputStream(input);
        int choice;
        char extraCharacter;

        if ((inputStream >> choice) &&
            !(inputStream >> extraCharacter) &&
            choice >= 1 && choice <= 4)
        {
            return choice;
        }

        std::cout << "Invalid input. Please enter a whole number "
                     "from 1 to 4.\n";
    }
}

int main()
{
    runProgram();
    return 0;
}
