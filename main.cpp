#include <iostream>
#include <sstream>
#include <string>

void runProgram();

int readChoice(int minimum, int maximum)
{
    std::string input;

    while (true)
    {
        std::cout << "Enter your choice: ";

        if (!std::getline(std::cin, input))
        {
            std::cout << '\n';
            return maximum;
        }

        std::istringstream inputStream(input);
        int choice;
        char extraCharacter;

        if ((inputStream >> choice) &&
            !(inputStream >> extraCharacter) &&
            choice >= minimum &&
            choice <= maximum)
        {
            return choice;
        }

        std::cout << "Invalid input. Please enter a whole number from "
                  << minimum << " to " << maximum << ".\n";
    }
}

int readMainMenu()
{
    std::cout << "\n============== Main Menu ==============\n";
    std::cout << "1. Find a movie\n";
    std::cout << "2. View my history\n";
    std::cout << "3. Exit\n";

    return readChoice(1, 3);
}

int readGenre()
{
    std::cout << "\n============ Choose a Genre ===========\n";
    std::cout << "1. Action\n";
    std::cout << "2. Comedy\n";
    std::cout << "3. Horror\n";
    std::cout << "4. Back to main menu\n";

    return readChoice(1, 4);
}

int main()
{
    runProgram();
    return 0;
}
