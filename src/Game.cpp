#include "Game.hpp"

Game::Game()
{
    this->isGameOver   = false;
    this->FPS = 60;
    this->frameStartTime = SDL_GetPerformanceCounter();
	this->frameEndTime = 0;
    this->windowWidth  = 640;
    this->windowHeight = 480;
    this->ball         = Ball(this->windowWidth, this->windowHeight);
    this->playerOne    = Paddle(this->windowWidth, this->windowHeight, 1);
    this->playerTwo    = Paddle(this->windowWidth, this->windowHeight, 2);
    this->initializeSDL();
}

Game::Game(int windowWidth, int windowHeight)
{
    this->isGameOver     = false;
    this->FPS            = 60;
    this->frameStartTime = SDL_GetPerformanceCounter();
	this->frameEndTime   = 0;
    this->windowWidth    = windowWidth;
    this->windowHeight   = windowHeight;
    this->ball           = Ball(windowHeight, windowHeight);
    this->playerOne      = Paddle(windowWidth, windowHeight, 1);
    this->playerTwo      = Paddle(windowWidth, windowHeight, 2);
    this->initializeSDL();
}


Game::~Game()
{
    SDL_DestroyRenderer(this->renderer);
    SDL_DestroyWindow(this->window);
    SDL_Quit();
}

void Game::initializeSDL()
{
    this->window   = SDL_CreateWindow("pong_clone", this->windowWidth, this->windowHeight, 0);
    this->renderer = SDL_CreateRenderer(window, nullptr, SDL_RENDERER_ACCELERATED);
    if (!(this->window) || !(this->renderer)) {
        std::cerr << "main: " << SDL_GetError() << std::endl;
        std::exit(-1);
    }
}

void Game::clearRenderer()
{

}

void Game::maintainFrameRate(double framesPerSecond)
{
	this->frameEndTime = SDL_GetPerformanceCounter();

	Uint64 msPerFrame = static_cast<Uint64>(1000) / static_cast<Uint64>(framesPerSecond);
	Uint64 msPerFrameActual = (this->frameEndTime - this->frameStartTime) / (SDL_GetPerformanceFrequency() * static_cast<Uint64>(1000));
	Uint32 msToWait = (msPerFrame > msPerFrameActual) ? // if the difference is negative set to zero
		static_cast<Uint32>(msPerFrame - msPerFrameActual) 
		: 0;
	SDL_Delay(msToWait);

	this->frameStartTime = SDL_GetPerformanceCounter();
}

void Game::updateDisplay()
{
    SDL_SetRenderDrawColor(this->renderer, 0, 0, 0, 255);
    SDL_RenderPresent(this->renderer);
    SDL_RenderClear(this->renderer);
    this->maintainFrameRate(this->FPS);
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
        this->handleEvents();

        this->updateDisplay();
    }
}