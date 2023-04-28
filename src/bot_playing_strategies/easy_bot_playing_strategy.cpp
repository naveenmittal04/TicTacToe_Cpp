#include "bot_playing_strategy.cpp"
#include "../models/move.cpp"

class EasyBotPlayingStrategy : public BotPlayingStrategy {
    public:
        Move makeMove(Board board, Player player);
};

Move EasyBotPlayingStrategy::makeMove(Board board, Player player)
{
    int row = 0;
    int col = 0;
    Move move = Move(row, col, player);
    return move;
}	