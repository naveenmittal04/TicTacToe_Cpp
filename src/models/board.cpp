#include <vector>
#include "cell.cpp"

class Board
{
private:
    std::vector<std::vector<Cell>> mBoard;
    int mSize;
public:
    Board(int size);
    ~Board();
};

Board::Board(int size)
{
    mSize = size;
    mBoard = std::vector<std::vector<Cell>>(size, std::vector<Cell>(size));
}

Board::~Board()
{
}
