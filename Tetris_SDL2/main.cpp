#include "Tetris.h"
#include <bits/stdc++.h>

using namespace std;
int main(int argc, char* argv[]){
    srand(time(0));
    Tetris* tetris = new Tetris();
    const char* title = "Tetris";

    while(tetris->getreplay())
    {
         tetris->init(title);
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
        tetris->replay();
        tetris->handleEvennts();
        if(tetris->getreset())
        {
           // delete tetris;
           // tetris = new Tetris();
           tetris->setisrunning(true);
        }


    }
    tetris->clean();
    return 0;
}
