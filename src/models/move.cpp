#include "player.cpp"

class Move{
    private:
        int mRow;
        int mColumn;
        Player mPlayer;
    public:
        Move(int row, int col, Player player);
        ~Move();
        int getRow();
        int getColumn();
        Player getPlayer();
        void setRow(int row);
        void setColumn(int column);
        void setPlayer(Player player);
};

Move::Move(int row, int col, Player player)
{
    mRow = row;
    mColumn = col;
    mPlayer = player;
}

Move::~Move()
{
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

