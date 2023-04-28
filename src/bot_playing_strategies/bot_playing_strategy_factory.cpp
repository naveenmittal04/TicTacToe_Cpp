#include "easy_bot_playing_strategy.cpp"
#include "../models/bot_difficulty_levels.cpp"

class BotPlayingStrategyFactory {
    public:
        static BotPlayingStrategy* createBotPlayingStrategy(BotDifficultyLevel botDifficultyLevel);
};

BotPlayingStrategy* BotPlayingStrategyFactory::createBotPlayingStrategy(BotDifficultyLevel botDifficultyLevel)
{
    switch (botDifficultyLevel)
    {
    case BotDifficultyLevel::EASY:
        return new EasyBotPlayingStrategy();
        break;
    case BotDifficultyLevel::MEDIUM:
    case BotDifficultyLevel::HARD:
    default:
        return new EasyBotPlayingStrategy();
        break;
    }
}