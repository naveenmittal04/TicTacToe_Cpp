#include "../models/move.cpp"

class WinningStrategy {
    public:
        virtual bool isWinningMove(Move move) = 0;
};