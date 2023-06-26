#include "Ball.hpp"

Ball::Ball(int windowWidth, int windowHeight)
{
    const float size = windowWidth * .015625;
    const float x    = (windowWidth/2)  - (size/2);
    const float y    = (windowHeight/2) - (size/2);
    const float dx   = .05;
    const float dy   = .05;
    this->setBoundary({x, y, size, size});
    this->setVelocity({dx, dy});
}

Ball::Ball()
{
    int windowWidth  = 640;
    int windowHeight = 480;
    const float size = windowWidth * .015625;
    const float x    = (windowWidth/2)  - (size/2);
    const float y    = (windowHeight/2) - (size/2);
    const float dx   = .05;
    const float dy   = .05;
    this->setBoundary({x, y, size, size});
    this->setVelocity({dx, dy});
}

Ball::~Ball()
{

}
