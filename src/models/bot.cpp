#include <string>
#include "../bot_playing_strategies/bot_playing_strategy.cpp"
#include "../bot_playing_strategies/bot_playing_strategy_factory.cpp"
#include "bot_difficulty_levels.cpp"

class Bot: public Player {
    private:
        BotPlayingStrategy *mBotPlayingStrategy;
        BotDifficultyLevel mBotDifficultyLevel;
    public:
        Bot();
        Bot(std::string name, std::string symbol, BotDifficultyLevel botDifficultyLevel);
        Bot(const Bot& other);
        ~Bot();
        Move makeMove(Board board);
        Bot& operator=(const Bot& other);
};

Bot::Bot()
{
}

Bot::Bot(std::string name, std::string symbol, BotDifficultyLevel botDifficultyLevel): Player(name, symbol, PlayerType::Bot)
{
    mBotDifficultyLevel = botDifficultyLevel;
    mBotPlayingStrategy = BotPlayingStrategyFactory::createBotPlayingStrategy(botDifficultyLevel);
}

Bot::Bot(const Bot& other) : Player(other)
{
    mBotPlayingStrategy = other.mBotPlayingStrategy;
}

Bot::~Bot()
{
}

Bot& Bot::operator=(const Bot& other)
{
    if (this == &other) {
        return *this; // handle self-assignment
    }

    this->setName(other.getName());
    this->setSymbol(other.getSymbol());

    // Copy the data from 'other' to this object
    // For example, if the Bot class has an 'int score' member:
    mBotPlayingStrategy = other.mBotPlayingStrategy;

    // Return *this to allow for chained assignment (e.g., a = b = c)
    return *this;
}

Move Bot::makeMove(Board board)
{
    return mBotPlayingStrategy->makeMove(board, *this);
}	