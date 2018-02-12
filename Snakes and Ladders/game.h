#ifndef GAME_H
#define GAME_H
#include <array>
#include "board.h"

class Game
{
public:
    void init();
    void play();
    void DisplayPlayerInfo();
    void PrintPlayers();
    void Dice();
private:
    bool win;
    int numOfPlayers;
    std::array<int,5> players = {};
    std::array<int,5> position = {};
    int turn;
    Board* b;
};


#endif // GAME_H
