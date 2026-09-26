#include <iostream>

// Implemented by Member A in main.cpp.
int readGenre();

// Implemented by Member B in recommendations.cpp.
void showRecommendation(int genre);

// Run the complete interactive program.
void runProgram()
{
    int recommendationCount = 0;

    std::cout << "=========================================\n";
    std::cout << " Netflix Movie Recommendation Assistant\n";
    std::cout << "=========================================\n";
    std::cout << "Find a movie based on your favourite genre.\n";
    std::cout << "This student demo uses a fixed sample catalogue.\n";

    while (true)
    {
        int choice = readGenre();

        if (choice == 4)
        {
            break;
        }

        showRecommendation(choice);
        ++recommendationCount;

        std::cout << "\nChoose another genre for another recommendation,\n";
        std::cout << "or select 4 from the menu to exit.\n";
    }

    std::cout << "\nRecommendations shown: "
              << recommendationCount << '\n';
    std::cout << "Thank you for using the Movie "
                 "Recommendation Assistant. Goodbye!\n";
}