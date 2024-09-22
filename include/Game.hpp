#pragma once

#include <SDL3/SDL.h>

#include "Ball.hpp"
#include "Paddle.hpp"

class Game
{
private:
    int           windowWidth;
    int           windowHeight;
    SDL_Window*   window;
    SDL_Renderer* renderer;
    double		  FPS;
	Uint64        frameStartTime;
	Uint64		  frameEndTime;
    
    Ball ball;
    Paddle playerOne;
    Paddle playerTwo;
    bool isGameOver;


    void initializeSDL();

    void handleEvents();
    void handleInput();

    void maintainFrameRate(double framesPerSecond);
    void updateDisplay();


public:
    Game();
    Game(int windowWidth, int windowHeight);
    ~Game();

    void run();
};