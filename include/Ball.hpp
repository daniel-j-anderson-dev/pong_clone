#pragma once

#include "Moving_Object.hpp"

class Ball : public Moving_Object
{
private:

public:
    Ball(SDL_Point windowSize);
    Ball();
    ~Ball();

    void updatePosition(SDL_FRect playerOneCollision, SDL_FRect playerTwoCollision);
};