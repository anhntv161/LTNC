#include "Tetris.h"
#include <bits/stdc++.h>

using namespace std;
int main(int argc, char* argv[]){
    srand(time(0));
    Tetris* tetris = new Tetris();
    const char* title = "Tetris";
    tetris->init(title);
    while(tetris->getreplay())
    {
        while (tetris->isrunning())
        {
            tetris->setCurrentTime(SDL_GetTicks());
            tetris->handleEvennts();
            if(tetris->getintro() == true)
            {
                tetris->loadintro();
            }
            else
            {
                tetris->gameplay();
                tetris->updateRender();
            }
            tetris->gameOver();
        }
        tetris->endgame();
    }
    tetris->clean();
    return 0;
}
