#include "Paddle.hpp"

Paddle::Paddle(SDL_Point windowSize, int playerNumber)
{
    this->playerNumber = playerNumber;
    const float w      = windowSize.x * .03125;
    const float h      = windowSize.y * .166666666666666;
    const float dx     = .05;
    const float dy     = .05;
    const float x      = 0;
    const float y      = 0;

    this->setWindowSize({windowSize.x, windowSize.y});
    this->setVelocity({dx, dy});
    switch(this->playerNumber) {
        case 1:
            this->setBoundary({x, y, w, h});
            break;
        case 2:
            const float x = windowSize.x  - w;
            const float y = windowSize.y - h;
            this->setBoundary({x, y, w, h});
            break;
    }
}

Paddle::Paddle()
{
    this->setWindowSize({640, 480});
    this->playerNumber = 1;
    const float w      = this->getWindowSize().x * 03125;
    const float h      = this->getWindowSize().y * .166666666666666;
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
            const float x = this->getWindowSize().x  - w;
            const float y = this->getWindowSize().y - h;
            this->setBoundary({x, y, w, h});
            this->setVelocity({dx, dy});
            break;
    }
}

Paddle::~Paddle()
{

}

void Paddle::updatePosition()
{
    if(this->getBoundary().y + this->getVelocity().y < 0)
    {
        this->setYPosition(0);
    } 
    else if (this->getBoundary().y + this->getBoundary().h > this->getWindowSize().y)
    {
        this->setYPosition(this->getWindowSize().y - this->getBoundary().h);
    }
    else
    {
        this->setYPosition(this->getBoundary().y + this->getVelocity().y);
    }
    
    this->move();
}
