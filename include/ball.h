#ifndef BALL_H
#define BALL_H  

#include <raylib.h>
#include <stdlib.h>

typedef struct Ball {
    int x;
    int y;

    int xV;
    int yV;

    int radius;
    
    Color color;
} Ball;

/**
 * Creates a new game ball
 * @param x X Position of the ball
 * @param y y Position of the ball
 * @param width Internal width of the ball
 * @param height Internal height of the ball
 * @param color Color of the ball
 * 
 * @returns A pointer to the ball
 */
Ball* createBall(int x, int y, int xV, int yV, int radius, Color color);

void drawBall(Ball* ball);

void updateBall();

void setPositionBall(Ball* ball, int x, int  y);

void setBallSpeed(Ball* ball, int xV, int yV);

#endif //BALL_H