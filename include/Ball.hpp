#pragma once

#include "Moving_Object.hpp"

class Ball : public Moving_Object
{
private:

public:
    Ball(int windowWidth, int windowHeight);
    Ball();
    ~Ball();
};