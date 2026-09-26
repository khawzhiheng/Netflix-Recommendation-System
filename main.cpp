#include <iostream>

// Member 1 - Stage 1: Display the movie genre menu.
void displayMenu()
{
    std::cout << "\n========== Movie Menu ==========\n";
    std::cout << "1. Action\n";
    std::cout << "2. Comedy\n";
    std::cout << "3. Horror\n";
    std::cout << "4. Exit\n";
}

int main()
{
    std::cout << "Netflix Movie Recommendation Assistant\n";
    std::cout << "Student project - sample movie catalogue\n";

    displayMenu();

    // User input and validation will be implemented in the next stage.
    return 0;
}
