#include <iostream>

// Display a recommendation based on the selected genre.
void showRecommendation(int genre)
{
    std::cout << "\n========== Your Recommendation ==========\n";

    switch (genre)
    {
        case 1:
            std::cout << "Genre: Action\n";
            std::cout << "Movie: Extraction\n";
            std::cout << "Description: A mercenary undertakes a "
                         "dangerous mission to rescue a kidnapped boy.\n";
            break;

        default:
            std::cout << "No recommendation available "
                         "for this selection.\n";
            break;
    }

    std::cout << "=========================================\n";
}