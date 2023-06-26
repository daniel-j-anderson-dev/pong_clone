#include "Moving_Object.hpp"

Moving_Object::Moving_Object()
{
}

Moving_Object::~Moving_Object()
{
}

SDL_FRect Moving_Object::getBoundary()
{
}

SDL_FPoint Moving_Object::getVelocity()
{
}

float Moving_Object::getXPosition()
{
}

float Moving_Object::getYPosition()
{
}

float Moving_Object::getWidth()
{
}

float Moving_Object::getHeight()
{
}

float Moving_Object::getXVelocity()
{
}

float Moving_Object::getyVelocity()
{
}


void Moving_Object::setVelocity(SDL_FPoint velocity)
{
}

void Moving_Object::setVelocity(float xVelocity, float yVelocity)
{
}

void Moving_Object::setBoundary(SDL_FRect boundary)
{
}

void Moving_Object::setBoundary(float xPosition, float yPosition, float width, float height)
{
}

void Moving_Object::setXPosition(float xPosition)
{
}

void Moving_Object::setYPosition(float yPosition)
{
}

void Moving_Object::setWidth(float width)
{
}

void Moving_Object::setHeight(float height)
{
}

void Moving_Object::setXVelocity(float xVelocity)
{
}

void Moving_Object::setYVelocity(float yVelocity)
{
}


void Moving_Object::render(SDL_Renderer* renderer)
{
}
