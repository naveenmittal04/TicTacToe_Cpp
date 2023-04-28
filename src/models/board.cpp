#include <vector>
#include "cell.cpp"

class Board
{
private:
    std::vector<std::vector<Cell>> mBoard;
    int mSize;
public:
    Board();
    Board(int size);
    ~Board();
    Board& operator=(const Board& other);
};

Board::Board(int size)
{
    mSize = size;
    mBoard = std::vector<std::vector<Cell>>(size, std::vector<Cell>(size));
}

Board::Board()
{
}

Board::~Board()
{
}

Board& Board::operator=(const Board& other)
{
    if (this == &other) {
        return *this; // handle self-assignment
    }

    // Copy the data from 'other' to this object
    // For example, if the Board class has an 'int score' member:
    mBoard = other.mBoard;
    mSize = other.mSize;

    // Return *this to allow for chained assignment (e.g., a = b = c)
    return *this;
}