#include <iostream>
#include "SDL3/SDL.h"

void helloWorldSDL() 
{
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window*   window    = SDL_CreateWindow("pong_clone", 800, 800, 0);
    SDL_Renderer* renderer  = SDL_CreateRenderer(window, nullptr, SDL_RENDERER_ACCELERATED);
    bool          drawColor = SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255) == 0 ? true : false;
    bool          clear     = SDL_RenderClear(renderer) == 0 ? true : false;
    bool          present   = SDL_RenderPresent(renderer) == 0 ? true : false;
    if (!window || !renderer || !drawColor || !clear || !present) {
        std::cerr << "helloWorldSDL: " << SDL_GetError() << std::endl;
        std::exit(-1);
    }
    SDL_Delay(3000);
}

int main(int argc, char const *argv[])
{
    helloWorldSDL();
    return 0;
}
