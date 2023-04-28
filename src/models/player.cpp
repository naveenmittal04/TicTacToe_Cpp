#include <string>

enum class PlayerType{
    Human,
    Bot
};

class Player{
    private:
        std::string mName;
        std::string mSymbol;
        PlayerType mPlayerType;
    public:
        Player();
        Player(std::string name, std::string symbol, PlayerType playerType);
        Player(const Player& other);
        ~Player();
        std::string getName() const;
        std::string getSymbol() const;
        void setName(std::string name);
        void setSymbol(std::string symbol);
        Player& operator=(const Player& other);
};

Player::Player()
{
}

Player::Player(std::string name, std::string symbol, PlayerType playerType)
{
    mName = name;
    mSymbol = symbol;
    mPlayerType = playerType;
}

Player::Player(const Player& other)
{
    mName = other.mName;
    mSymbol = other.mSymbol;
    mPlayerType = other.mPlayerType;
}

Player::~Player()
{
}

Player& Player::operator=(const Player& other) {
    if (this == &other) {
        return *this; // handle self-assignment
    }

    // Copy the data from 'other' to this object
    // For example, if the Player class has an 'int score' member:
    mName = other.mName;
    mSymbol = other.mSymbol;

    // Return *this to allow for chained assignment (e.g., a = b = c)
    return *this;
}

std::string Player::getName() const
{
    return mName;
}

std::string Player::getSymbol() const
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
