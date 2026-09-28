#include <iostream>
#include <string>

int readChoice(int minimum, int maximum);

struct Movie
{
    std::string title;
    std::string description;
};

std::string chooseMovie(int genre)
{
    const std::string genreNames[3] = {
        "Action",
        "Comedy",
        "Horror"
    };

    const Movie movies[3][3] = {
        {
            {
                "Extraction",
                "A mercenary takes on a dangerous mission "
                "to rescue a kidnapped boy."
            },
            {
                "The Old Guard",
                "A team of immortal warriors fights "
                "to protect its secret."
            },
            {
                "Red Notice",
                "An FBI profiler becomes involved "
                "in a chase with rival art thieves."
            }
        },
        {
            {
                "Murder Mystery",
                "A married couple becomes involved "
                "in a murder investigation during a holiday."
            },
            {
                "Yes Day",
                "Two parents agree to say yes to their "
                "children's requests for one adventurous day."
            },
            {
                "The Wrong Missy",
                "A man accidentally invites the wrong woman "
                "to a company retreat."
            }
        },
        {
            {
                "His House",
                "A refugee couple moves into a new home "
                "where a sinister presence awaits."
            },
            {
                "Bird Box",
                "A mother tries to protect two children "
                "from a mysterious threat that must not be seen."
            },
            {
                "The Ritual",
                "A group of friends encounters a frightening "
                "presence while hiking through a forest."
            }
        }
    };

    if (genre < 1 || genre > 3)
    {
        return "";
    }

    int genreIndex = genre - 1;

    std::cout << "\n============== "
              << genreNames[genreIndex]
              << " Movies ==============\n";

    for (int i = 0; i < 3; ++i)
    {
        std::cout << i + 1 << ". "
                  << movies[genreIndex][i].title << '\n';
    }

    std::cout << "4. Back to genre menu\n";

    int choice = readChoice(1, 4);

    if (choice == 4)
    {
        return "";
    }

    const Movie& selectedMovie = movies[genreIndex][choice - 1];

    std::cout << "\n============== Movie Details ==============\n";
    std::cout << "Title: " << selectedMovie.title << '\n';
    std::cout << "Genre: " << genreNames[genreIndex] << '\n';
    std::cout << "\nDescription:\n";
    std::cout << selectedMovie.description << '\n';
    std::cout << "===========================================\n";

    return selectedMovie.title + " - " + genreNames[genreIndex];
}