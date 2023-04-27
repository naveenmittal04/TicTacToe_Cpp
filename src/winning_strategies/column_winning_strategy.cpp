#include <vector>
#include <unordered_map>

#include "winning_strategy.cpp"


class ColumnWinningStrategy : public WinningStrategy {
    private :
        std::vector<std::unordered_map<int, int>> mColumnMap;
    public:
        bool isWinningMove(Move move);
};

ColumnWinningStrategy::ColumnWinningStrategy()
{

}

ColumnWinningStrategy::~ColumnWinningStrategy()
{
}

bool ColumnWinningStrategy::isWinningMove(Move move)
{
    int row = move.getRow();
    int col = move.getColumn();
    Player player = move.getPlayer();
    return false;
}