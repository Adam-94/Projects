#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <array>

#include "game.h"

using namespace std;

void Game::init()
{
    cout << "------- Welcome to Snakes and Ladders -------" << endl;
    cout << "Enter number of players: ";
    cin >> numOfPlayers;

    turn = 1;
    win = false;

    for (int i = 1; i <= numOfPlayers; i++)
        players[i] = i;

	snakesLadders();
}

void Game::initBoard()
{
	for (int i = 100; i >= 1; i--)
	{
		gameBoard[i] = i;
	}
}

void Game::printBoard()
{
	for (int i = 100; i >= 1; i--)
	{
		gameBoard[position[turn]] = turn;
		cout << " |" << setw(3) << gameBoard[i] << "| ";
		if ((i - 1) % 10 == 0)
			cout << endl;
	}
	cout << endl << endl;
}

void Game::play()
{
    init();

    do
    {
       system("cls");
	   initBoard();
	   printBoard();
       DisplayPlayerInfo();
       Dice();
	   snakesLaddersLogic();
	   
       if (turn == numOfPlayers)
           turn = 0;

       turn++;

    } while (win != true);
}

void Game::DisplayPlayerInfo()
{
    char playerRoll;

	cout << "Current Player: " << players[turn] << endl << endl;
	for (int i = 1; i <= numOfPlayers; i++)
	{
		cout << "Player: " << players[i] << "\tPlayer Position: " << position[i] << endl;
	}
   
    do
    {
        cout << "\n" << "To roll enter ('R'): ";
        cin >> playerRoll;

    } while ( !cin.fail() && playerRoll != 'r' && playerRoll != 'R');
}

void Game::Dice()
{
    char proceed;
	int* roll = new int[turn];
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

void Game::snakesLadders()
{
	int min = 10;
	int max = 90;

	for (int i = 0; i < 12; i++)
	{
		ladders[i] = rand() % 90 + ladders[i];
		snakes[i] = rand() % 90 + snakes[i];
	}
}

void Game::snakesLaddersLogic()
{
	char proceed;

	do
	{
		for (int i = 0; i < 12; i++)
		{
			if (position[turn] == ladders[i])
			{
				cout << "\nYou hit a ladder!";
				position[turn] = position[turn] + ladders[i];
			}
			if (position[turn] == snakes[i])
			{
				cout << "\nYou hit a snake :(";
				position[turn] = position[turn] - snakes[i];
			}
		}

		cout << "\n" << "To continue enter ('C'): ";
		cin >> proceed;

	} while (!cin.fail() && proceed != 'c' && proceed != 'C');
}
