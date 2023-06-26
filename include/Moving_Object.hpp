#pragma once

#include <iostream>

#include "SDL3/SDL.h"

/**
 * @class Moving_Object
 * 
 * @brief stores position and size in a SDL_FRect, and velocity in a SDL_FPoint
 */
class Moving_Object {
private:
    SDL_FRect  boundary;
    SDL_FPoint velocity;

public:
    Moving_Object();
    ~Moving_Object();

    // accessors
    SDL_FRect  getBoundary();
    SDL_FPoint getVelocity();
    float      getXPosition();
    float      getYPosition();
    float      getWidth();
    float      getHeight();
    float      getXVelocity();
    float      getyVelocity();

    // mutators
    void setVelocity(SDL_FPoint velocity);
    void setVelocity(float xVelocity, float yVelocity);
    void setBoundary(SDL_FRect boundary);
    void setBoundary(float xPosition, float yPosition, float width, float height);
    void setXPosition(float xPosition);
    void setYPosition(float yPosition);
    void setWidth(float width);
    void setHeight(float height);
    void setXVelocity(float xVelocity);
    void setYVelocity(float yVelocity);

    // actions
    void render(SDL_Renderer* renderer);
    void updatePosition();
};