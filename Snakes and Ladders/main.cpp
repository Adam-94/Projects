#include <time.h>
#include "game.h"

int main()
{
    srand(time(0));
    Game* g = new Game;
        g->play();

    return 0;
}
