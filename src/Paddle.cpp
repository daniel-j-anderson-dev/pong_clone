#include "Paddle.hpp"

Paddle::Paddle(int windowWidth, int windowHeight, int playerNumber)
{
    this->playerNumber = playerNumber;
    const float w = windowWidth  * .03125;
    const float h = windowHeight * .166666666666666;
    const float dx   = .05;
    const float dy   = .05;
    const float x = 0;
    const float y = 0;
    switch(this->playerNumber) {
        case 1:
            this->setBoundary({x, y, w, h});
            this->setVelocity({dx, dy});
            break;
        case 2:
            const float x = windowWidth  - w;
            const float y = windowHeight - h;
            this->setBoundary({x, y, w, h});
            this->setVelocity({dx, dy});
            break;
    }
}

Paddle::Paddle()
{
    int windowWidth    = 640;
    int windowHeight   = 480;
    this->playerNumber = 1;
    const float w      = windowWidth  * .03125;
    const float h      = windowHeight * .166666666666666;
    const float dx     = .05;
    const float dy     = .05;
    const float x      = 0;
    const float y      = 0;
    switch(this->playerNumber) {
        case 1:
            this->setBoundary({x, y, w, h});
            this->setVelocity({dx, dy});
            break;
        case 2:
            const float x = windowWidth  - w;
            const float y = windowHeight - h;
            this->setBoundary({x, y, w, h});
            this->setVelocity({dx, dy});
            break;
    }
}

Paddle::~Paddle()
{

}