#include <vector>
#include <unordered_map>

#include "winning_strategy.cpp"
#include "../models/move.cpp"


class ColumnWinningStrategy : public WinningStrategy {
    private :
        std::vector<std::unordered_map<int, int>> mColumnMap;
    public:
        ColumnWinningStrategy(int size);
        ~ColumnWinningStrategy();
        bool isWinningMove(Move move);
};

ColumnWinningStrategy::ColumnWinningStrategy(int size)
{
    mColumnMap = std::vector<std::unordered_map<int, int>>(size-1, std::unordered_map<int, int>());
}

ColumnWinningStrategy::~ColumnWinningStrategy()
{
}

bool ColumnWinningStrategy::isWinningMove(Move move)
{
    int row = move.getRow();
    int col = move.getColumn();
    //Player player = move.getPlayer();
    return false;
}