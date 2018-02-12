#include <iostream>
#include <stdlib.h>
#include <iomanip>

#include "board.h"

using namespace std;

void Board::printBoard()
{
    for (int j = 0; j <= 100; j++)
    {
        gameBoard[j] = j;
    }

    for (int i = 100; i >= 1; i--)
    {
        cout << " |" << setw(4) << "| ";
        if ((i - 1) % 10 == 0)
            cout << endl;
    }
    cout << endl << endl;
}
