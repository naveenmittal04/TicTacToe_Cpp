#include "../models/move.cpp"
#include "../models/board.cpp"
#include "../models/player.cpp"

class BotPlayingStrategy {
    public:
        virtual Move makeMove(Board, Player) = 0;
};