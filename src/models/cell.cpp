#include<string>
#include "player.cpp"

enum class CellState{Empty, Occupide, Obstacle};

class Cell
{
    private:
       CellState mCellState;
       Player mPlayer;
    public:
        Cell();
        ~Cell();
        CellState getCellState();
        Player getPlayer();
        void setCellState(CellState cellState);
        void setPlayer(Player player);
};

Cell::Cell()
{
    mCellState = CellState::Empty;
}

Cell::~Cell()
{
}

CellState Cell::getCellState()
{
    return mCellState;
}

Player Cell::getPlayer()
{
    return mPlayer;
}

void Cell::setCellState(CellState cellState)
{
    mCellState = cellState;
}

void Cell::setPlayer(Player player)
{
    mPlayer = player;
}
