#include <iostream>
#include <string>
#include <array>

#include "game.h"

using namespace std;

void Game::init()
{
    cout << "------- Welcome to Snakes and Ladders -------" << endl;
    cout << "Enter number of players: ";
    cin >> numOfPlayers;

    b = new Board();
    turn = 1;
    win = false;

    for (int i = 1; i <= numOfPlayers; i++)
        players[i] = i;
}

void Game::play()
{
    init();

    do
    {
       system("cls");
       b->printBoard();
       DisplayPlayerInfo();
       Dice();

       if (turn > 5)
           turn = 0;

       turn++;

    } while (win != true);
}

void Game::DisplayPlayerInfo()
{
    char playerRoll;
    cout << "Player: " << players[turn] << endl;
    cout << "Player Position: " << position[turn] << endl;

    do
    {
        cout << "To roll enter ('R'): ";
        cin >> playerRoll;

    } while ( !cin.fail() && playerRoll != 'r' && playerRoll != 'R');
}

void Game::Dice()
{
    char proceed;
    int roll[turn];
    int min = 1;
    int max = 12;

    roll[turn] = rand() % (max - min + 1) + min;
    cout << "You Rolled: " << roll[turn] << endl;



    do
    {
        if (position[turn] == position.empty())
            position[turn] = roll[turn];
        else
            position[turn] = position[turn] + roll[turn];

        cout << endl << endl << "Press ('Y') To Continue: ";
        cin >> proceed;

    } while ( !cin.fail() && proceed != 'Y' && proceed != 'y');
}
