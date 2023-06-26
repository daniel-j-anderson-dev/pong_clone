#include "../include/Game.hpp"

Game::Game()
{
    this->isGameOver   = false;
    this->windowWidth  = 640;
    this->windowHeight = 480;
    this->ball         = Ball(this->windowWidth, this->windowHeight);
    this->playerOne    = Paddle(this->windowWidth, this->windowHeight, 1);
    this->playerTwo    = Paddle(this->windowWidth, this->windowHeight, 2);
    this->initializeSDL();
}

Game::Game(int windowWidth, int windowHeight)
{
    this->isGameOver   = false;
    this->windowWidth  = windowWidth;
    this->windowHeight = windowHeight;
    this->ball         = Ball(windowHeight, windowHeight);
    this->playerOne    = Paddle(windowWidth, windowHeight, 1);
    this->playerTwo    = Paddle(windowWidth, windowHeight, 2);
    this->initializeSDL();
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

void Game::handleEvents()
{
    SDL_Event event;
	const Uint8* keys = SDL_GetKeyboardState(nullptr);
    while (SDL_PollEvent(&event)) {
        switch (event.type) {
            case SDL_EVENT_QUIT:
                isGameOver = true;
                SDL_Quit();
                std::exit(0);
                break;

            case SDL_EVENT_KEY_DOWN:
                this->handleInput();
                break;

            case SDL_EVENT_KEY_UP:
                this->handleInput();
                break;
            // other SDL_EVENTs
            default:
                break;
        }
    }
}

void Game::handleInput()
{
    this->playerOne.setVelocity({0, 0});
    this->playerTwo.setVelocity({0, 0});
    float paddleSpeed = .05;
	const Uint8* keys = SDL_GetKeyboardState(nullptr);
    if (keys[SDL_SCANCODE_W]) {
        this->playerOne.setYVelocity(-paddleSpeed);
    }
    if (keys[SDL_SCANCODE_S]) {
        this->playerOne.setYVelocity(paddleSpeed);
    }
    if (keys[SDL_SCANCODE_UP]) {
        this->playerTwo.setYVelocity(-paddleSpeed);
    }
    if (keys[SDL_SCANCODE_DOWN]) {
        this->playerTwo.setYVelocity(paddleSpeed);
    }
    
    if (keys[SDL_SCANCODE_ESCAPE]) {
        SDL_Event quitEvent;
        SDL_zero(quitEvent);
        quitEvent.type = SDL_EVENT_QUIT;
        SDL_PushEvent(&quitEvent);
        return;
    }
}

void Game::run()
{
    while(!isGameOver)
    {
        
    }
}