#include "Moving_Object.hpp"

Moving_Object::Moving_Object(SDL_FRect boundary, SDL_FPoint velocity)
{
    this->setBoundary(boundary);
    this->setVelocity(velocity);
}

Moving_Object::Moving_Object(const Moving_Object& movingObject) 
{
    this->setBoundary(movingObject.boundary);
    this->setVelocity(movingObject.velocity);
}


Moving_Object::~Moving_Object()
{
}

SDL_FRect Moving_Object::getBoundary()
{
    return this->boundary;
}

SDL_FPoint Moving_Object::getVelocity()
{
    return this->velocity;
}

float Moving_Object::getXPosition()
{
    return this->boundary.x;
}

float Moving_Object::getYPosition()
{
    return this->boundary.y;
}

float Moving_Object::getWidth()
{
    return this->boundary.w;
}

float Moving_Object::getHeight()
{
    return this->boundary.h;
}

float Moving_Object::getXVelocity()
{
    return this->velocity.x;
}

float Moving_Object::getyVelocity()
{
    return this->velocity.y;
}

void Moving_Object::setVelocity(SDL_FPoint velocity)
{
    this->velocity = velocity;
}

void Moving_Object::setVelocity(float xVelocity, float yVelocity)
{
    this->setVelocity({xVelocity, yVelocity});
}

void Moving_Object::setBoundary(SDL_FRect boundary)
{
    this->boundary = boundary;
}

void Moving_Object::setBoundary(float xPosition, float yPosition, float width, float height)
{
    this->setBoundary({xPosition, yPosition, width, height});
}

void Moving_Object::setXPosition(float xPosition)
{
    this->boundary.x = xPosition;
}

void Moving_Object::setYPosition(float yPosition)
{
    this->boundary.y = yPosition;
}

void Moving_Object::setWidth(float width)
{
    this->boundary.w = width;
}

void Moving_Object::setHeight(float height)
{
    this->boundary.h = height;
}

void Moving_Object::setXVelocity(float xVelocity)
{
    this->velocity.x = xVelocity;
}

void Moving_Object::setYVelocity(float yVelocity)
{
    this->velocity.y = yVelocity;
}

void Moving_Object::render(SDL_Renderer* renderer)
{
    if (SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255) < 0) {
        std::cerr << "In Moving_Object::render " << SDL_GetError() << std::endl;
        std::exit(-1);
    }
    if (SDL_RenderFillRect(renderer, &(this->boundary)) < 0) {
        std::cerr << "In Moving_Object::render " << SDL_GetError() << std::endl;
        std::exit(-1);
    }
}

void Moving_Object::updatePosition()
{
    this->boundary.x += this->velocity.x;
    this->boundary.y += this->velocity.y;
}