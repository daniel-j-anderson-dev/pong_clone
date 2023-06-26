#pragma once

#include "Moving_Object.hpp"

class Paddle : public Moving_Object
{
private:
    int playerNumber;

public:
    Paddle(int windowWidth, int windowHeight, int playerNumber);
    ~Paddle();

    int getPlayerNumber();

};