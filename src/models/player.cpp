#include <string>

class Player{
    private:
        std::string mName;
        std::string mSymbol;
    public:
        Player();
        ~Player();
        std::string getName();
        std::string getSymbol();
        void setName(std::string name);
        void setSymbol(std::string symbol);
};

Player::Player()
{
}

Player::~Player()
{
}

std::string Player::getName()
{
    return mName;
}

std::string Player::getSymbol()
{
    return mSymbol;
}

void Player::setName(std::string name)
{
    mName = name;
}

void Player::setSymbol(std::string symbol)
{
    mSymbol = symbol;
}
