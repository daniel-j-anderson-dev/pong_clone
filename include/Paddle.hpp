#pragma once

#include "Moving_Object.hpp"

class Paddle : public Moving_Object
{
private:
    int playerNumber;

public:
    Paddle(SDL_Point windowSize, int playerNumber);
    Paddle();
    ~Paddle();

    int getPlayerNumber();

    virtual void updatePosition();
};