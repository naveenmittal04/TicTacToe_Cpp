#include <vector>
#include <unordered_map>

#include "winning_strategy.cpp"

class CrossWinningStrategy : public WinningStrategy {
    private :
        std::unordered_map<int, int> mLeftDiagonalMap;
        std::unordered_map<int, int> mRightDiagonalMap;
    public:
        CrossWinningStrategy(int size);
        ~CrossWinningStrategy();
        bool isWinningMove(Move move);
};

CrossWinningStrategy::CrossWinningStrategy(int size)
{
    mLeftDiagonalMap = std::unordered_map<int, int>();
    mRightDiagonalMap = std::unordered_map<int, int>();
}

CrossWinningStrategy::~CrossWinningStrategy()
{
}

bool CrossWinningStrategy::isWinningMove(Move move)
{
    int row = move.getRow();
    int col = move.getColumn();
    Player player = move.getPlayer();
    return false;
}