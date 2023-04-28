#include <vector>
#include <unordered_map>

#include "winning_strategy.cpp"

class RowWinningStrategy : public WinningStrategy {
    private :
        int size;
        std::vector<std::unordered_map<int, int>> mRowMap;
    public:
        RowWinningStrategy(int size);
        ~RowWinningStrategy();
        bool isWinningMove(Move move);
};

RowWinningStrategy::RowWinningStrategy(int size)
{
    this->size = size;
    mRowMap = std::vector<std::unordered_map<int, int>>(size-1, std::unordered_map<int, int>());
}

RowWinningStrategy::~RowWinningStrategy()
{
}

bool RowWinningStrategy::isWinningMove(Move move)
{
    int row = move.getRow();
    int col = move.getColumn();
    Player player = move.getPlayer();
    return false;
}