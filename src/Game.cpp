#include "../include/Game.hpp"

Game::Game()
{
    this->windowWidth  = 640;
    this->windowHeight = 480;
    this->initializeSDL();
    this->initializeBall();
    this->initializePaddles();
}

Game::Game(int windowWidth, int windowHeight)
{
    this->windowWidth  = windowWidth;
    this->windowHeight = windowHeight;
    this->initializeSDL();
    this->initializeBall();
    this->initializePaddles();
}


Game::~Game()
{

}

void Game::initializeSDL()
{
    this->window   = SDL_CreateWindow("gpt_pong", this->windowWidth, this->windowHeight, 0);
    this->renderer = SDL_CreateRenderer(window, nullptr, SDL_RENDERER_ACCELERATED);
    if (!(this->window) || !(this->renderer)) {
        std::cerr << "main: " << SDL_GetError() << std::endl;
        std::exit(-1);
    }
}

void Game::initializeBall()
{
    this->ball.setWidth(this->windowWidth   * .015625);
    this->ball.setHeight(this->windowHeight * .015625);
    this->ball.setXPosition((this->windowWidth/2)  - (this->ball.getWidth()/2));
    this->ball.setYPosition((this->windowHeight/2) - (this->ball.getHeight()/2));
}

void Game::initializePaddles()
{
    this->paddles[0].setWidth(this->windowWidth   * .03125);
    this->paddles[0].setHeight(this->windowHeight * .166666666666666);
    this->paddles[0].setXPosition(0);
    this->paddles[0].setYPosition(0);

    this->paddles[1].setWidth(this->windowWidth   * .03125);
    this->paddles[1].setHeight(this->windowHeight * .166666666666666);
    this->paddles[1].setXPosition((this->windowWidth/2)  - (this->ball.getWidth()/2));
    this->paddles[1].setYPosition((this->windowHeight/2) - (this->ball.getHeight()/2));
}