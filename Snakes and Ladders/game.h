#ifndef GAME_H
#define GAME_H
#include <array>

using namespace std;

class Game
{
public:
    void init();
    void play();
    void DisplayPlayerInfo();
	void printBoard();
	void initBoard();
	void snakesLadders();
	void snakesLaddersLogic();
	void Dice();

private:
    bool win;
    int numOfPlayers;
	int turn;
	int gameBoard[100];
	array<int, 12> ladders = {0};
	array<int, 12> snakes = {0};
	array<int,100> players = {0};
	array<int, 100> position =  {0};
};


#endif // GAME_H
