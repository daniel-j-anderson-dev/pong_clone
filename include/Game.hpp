#pragma once

#include "Ball.hpp"
#include "Paddle.hpp"

class Game
{
private:
    int windowWidth;
    int windowHeight;
    SDL_Window*   window;
    SDL_Renderer* renderer;
    Ball ball;
    Paddle playerOne;
    Paddle playerTwo;
    bool isGameOver;

    void initializeSDL();
    void initializeBall();
    void initializePaddles();

    void handleEvents();
    void handleInput();
public:
    Game();
    Game(int windowWidth, int windowHeight);
    ~Game();

    void run();
};