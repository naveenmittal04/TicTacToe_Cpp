#include "player.cpp"

class Move{
    private:
        int mRow;
        int mColumn;
        Player mPlayer;
    public:
        Move(int row, int col, Player player);
        Move(const Move& other);
        Move();
        ~Move();
        int getRow();
        int getColumn();
        Player getPlayer();
        void setRow(int row);
        void setColumn(int column);
        void setPlayer(Player player);
        Move& operator=(const Move& other);
};

Move::Move(int row, int col, Player player)
{
    mRow = row;
    mColumn = col;
    mPlayer = player;
}

Move::Move(const Move& other)
{
    mRow = other.mRow;
    mColumn = other.mColumn;
    mPlayer = other.mPlayer;
}

Move::Move()
{
}

Move::~Move()
{
}

Move& Move::operator=(const Move& other) {
    if (this == &other) {
        return *this; // handle self-assignment
    }

    // Copy the data from 'other' to this object
    // For example, if the Player class has an 'int score' member:
    mRow = other.mRow;
    mColumn = other.mColumn;
    mPlayer = other.mPlayer;
    // Return *this to allow for chained assignment (e.g., a = b = c)
    return *this;
}

int Move::getRow()
{
    return mRow;
}

int Move::getColumn()
{
    return mColumn;
}

Player Move::getPlayer()
{
    return mPlayer;
}

void Move::setRow(int row)
{
    mRow = row;
}

void Move::setColumn(int column)
{
    mColumn = column;
}

void Move::setPlayer(Player player)
{
    mPlayer = player;
}

