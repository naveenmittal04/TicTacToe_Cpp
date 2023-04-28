#include <iostream>
#include "models/board.cpp"
#include "models/player.cpp"
#include "models/bot.cpp"
#include "models/game.cpp"
#include "winning_strategies/column_winning_strategy.cpp"
#include "winning_strategies/row_winning_strategy.cpp"
#include "winning_strategies/cross_winning_strategy.cpp"

int main(int argc, char *argv[])
{
    int size;
    std::cin>>size;
    std::vector<Player> players(size-1);
    for(int i = 0; i < size; i++){
        std::string name;
        std::string symbol;
        std::string typeString;
        PlayerType playerType;
        std::cin>> name;
        std::cin>>symbol;
        std::cout<<"Type Human or Bot"<<std::endl;
        std::cin>>typeString;
        if(typeString == "Human"){
            playerType = PlayerType::Human;
            players[i] = Player(name, symbol, playerType);
        }else{
            playerType = PlayerType::Bot;
            BotDifficultyLevel botDifficultyLevel;
            std::string botDifficultyLevelString;

            std::cout<<"Enter bot difficulty: Easy, Medium, Hard"<<std::endl;
            std::cin>>botDifficultyLevelString;

            if(botDifficultyLevelString == "Easy"){
                botDifficultyLevel = BotDifficultyLevel::EASY;
            }else if(botDifficultyLevelString == "Medium"){
                botDifficultyLevel = BotDifficultyLevel::MEDIUM;
            }else{
                botDifficultyLevel = BotDifficultyLevel::HARD;
            }
            players[i] = Bot(name, symbol, botDifficultyLevel);
        }
    }
    std::cout<<"Validating Input"<<std::endl;
    Game game = Game.Builder()
                    .setBoardSize(size)
                    .setPlayers(players)
                    .setWinningStrategy(ColumnWinningStrategy(size))
                    .setWinningStrategy(RowWinningStrategy(size))
                    .setWinningStrategy(CrossWinningStrategy(size))
                    .build();
    Board *b = new Board(size);
    std::cout << "Hello world!" << std::endl;
}
