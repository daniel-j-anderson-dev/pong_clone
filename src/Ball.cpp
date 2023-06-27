#include "Ball.hpp"

Ball::Ball(SDL_Point windowSize)
{
    const float size = windowSize.x * .015625;
    const float x    = (windowSize.x/2)  - (size/2);
    const float y    = (windowSize.y/2) - (size/2);
    const float dx   = 1;
    const float dy   = 1;
    this->setWindowSize(windowSize);
    this->setBoundary({x, y, size, size});
    this->setVelocity({dx, dy});
}

Ball::Ball()
{
    SDL_Point windowSize = {640, 480};
    const float size = windowSize.x * .015625;
    const float x    = (windowSize.x/2)  - (size/2);
    const float y    = (windowSize.y/2) - (size/2);
    const float dx   = .5;
    const float dy   = .5;
    this->setWindowSize(windowSize);
    this->setBoundary({x, y, size, size});
    this->setVelocity({dx, dy});
}

Ball::~Ball()
{

}

void Ball::updatePosition(SDL_FRect playerOneCollision, SDL_FRect playerTwoCollision)
{
    const float size = this->getWindowSize().x * .015625;
    if (this->getBoundary().x        <= playerOneCollision.x + playerOneCollision.w &&
        this->getBoundary().y + size >= playerOneCollision.y &&
        this->getBoundary().y        <= playerOneCollision.y + playerOneCollision.h)
    {
        this->setXVelocity(-(this->getXVelocity()));
    } 
    else if (this->getBoundary().x + size >= playerTwoCollision.x &&
             this->getBoundary().y + size >= playerTwoCollision.y &&
             this->getBoundary().y        <= playerTwoCollision.y + playerOneCollision.h)
    {
        this->setXVelocity(-(this->getXVelocity()));
    }
    if (this->getBoundary().y        <= 0 ||
        this->getBoundary().x        <= 0 ||
        this->getBoundary().x + size >= this->getWindowSize().y ||
        this->getBoundary().y + size >= this->getWindowSize().y)
    {
        this->setYVelocity(-(this->getYVelocity()));
    }
    
    this->move();
}