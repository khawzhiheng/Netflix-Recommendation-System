#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int readChoice(int minimum, int maximum);
int readMainMenu();
int readGenre();

std::string chooseMovie(int genre);

void addToHistory(
    std::vector<std::string>& history,
    const std::string& movie
)
{
    if (std::find(history.begin(), history.end(), movie) == history.end())
    {
        history.push_back(movie);
        std::cout << "\nAdded to your viewing history.\n";
    }
    else
    {
        std::cout << "\nThis movie is already in your viewing history.\n";
    }
}

void showHistory(const std::vector<std::string>& history)
{
    std::cout << "\n============= Viewing History =============\n";

    if (history.empty())
    {
        std::cout << "Your viewing history is empty.\n";
        std::cout << "Choose \"Find a movie\" to get started.\n";
    }
    else
    {
        for (std::size_t i = 0; i < history.size(); ++i)
        {
            std::cout << i + 1 << ". " << history[i] << '\n';
        }

        std::cout << "\nTotal unique movies viewed: "
                  << history.size() << '\n';
    }

    std::cout << "\nPress Enter to return to the main menu.";

    std::string input;
    std::getline(std::cin, input);
}

void browseMovies(std::vector<std::string>& history)
{
    while (true)
    {
        int genre = readGenre();

        if (genre == 4)
        {
            return;
        }

        while (true)
        {
            std::string selectedMovie = chooseMovie(genre);

            if (selectedMovie.empty())
            {
                break;
            }

            addToHistory(history, selectedMovie);

            std::cout << "\n1. Choose another movie in this genre\n";
            std::cout << "2. Back to main menu\n";

            int nextChoice = readChoice(1, 2);

            if (nextChoice == 2)
            {
                return;
            }
        }
    }
}

void runProgram()
{
    std::vector<std::string> history;

    std::cout << "===========================================\n";
    std::cout << " Netflix Movie Recommendation Assistant\n";
    std::cout << "===========================================\n";
    std::cout << "Browse sample movies by genre.\n";
    std::cout << "History records movies whose details you open.\n";
    std::cout << "History is kept only during this session.\n";

    while (true)
    {
        int choice = readMainMenu();

        switch (choice)
        {
            case 1:
                browseMovies(history);
                break;

            case 2:
                showHistory(history);
                break;

            case 3:
                std::cout << "\nYou viewed "
                          << history.size()
                          << " unique movie(s) this session.\n";

                std::cout << "Thank you for using the Netflix "
                             "Movie Recommendation Assistant!\n";
                std::cout << "Goodbye!\n";
                return;
        }
    }
}