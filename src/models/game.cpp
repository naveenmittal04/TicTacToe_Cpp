#include <vector>
#include <iostream>
#include "board.cpp"
#include "player.cpp"
#include "../winning_strategies/winning_strategy.cpp"


class Game {
    private:
        Board mBoard;
        std::vector<Player> mPlayers;
        std::vector<WinningStrategy> mWinningStrategies;
        Game(int size, std::vector<Player> players, std::vector<WinningStrategy> winningStrategies);
    public:
        Game(const Game& other);
        ~Game();
        void start();
        Game& operator=(const Game& other);
};

Game::Game(int size, std::vector<Player> players, std::vector<WinningStrategy> winningStrategies)
{
    mBoard = Board(size);
    mPlayers = players;
    mWinningStrategies = winningStrategies;
}

Game::Game(const Game& other)
{
    mBoard = other.mBoard;
    mPlayers = other.mPlayers;
    mWinningStrategies = other.mWinningStrategies;
}

Game::~Game()
{
}

void Game::start()
{
    std::cout << "Game started" << std::endl;
}

Game& Game::operator=(const Game& other)
{
    if (this == &other) {
        return *this; // handle self-assignment
    }

    // Copy the data from 'other' to this object
    // For example, if the Game class has an 'int score' member:
    mBoard = other.mBoard;
    mPlayers = other.mPlayers;
    mWinningStrategies = other.mWinningStrategies;

    // Return *this to allow for chained assignment (e.g., a = b = c)
    return *this;
}