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

        case 2:
            std::cout << "Genre: Comedy\n";
            std::cout << "Movie: Murder Mystery\n";
            std::cout << "Description: A married couple becomes "
                         "involved in a murder investigation "
                         "during a European holiday.\n";
            break;

        case 3:
            std::cout << "Genre: Horror\n";
            std::cout << "Movie: His House\n";
            std::cout << "Description: A refugee couple struggles "
                         "to settle into a new home haunted "
                         "by a sinister presence.\n";
            break;

        default:
            std::cout << "No recommendation available "
                         "for this selection.\n";
            break;
    }

    std::cout << "=========================================\n";
}