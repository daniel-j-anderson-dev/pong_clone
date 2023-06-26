#pragma once

#include "Moving_Object.hpp"

class Game
{
private:
    int windowWidth;
    int windowHeight;
    SDL_Window*   window;
    SDL_Renderer* renderer;
    Moving_Object ball;
    Moving_Object paddles[2];

    void initializeSDL();
    void initializeBall();
    void initializePaddles();

public:
    Game();
    Game(int windowWidth, int windowHeight);
    ~Game();


};