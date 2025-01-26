#include "ball.h"

Ball* createBall(int x, int y, int xV, int yV, int radius, Color color) {
    Ball* ball = malloc(sizeof(Ball));
    ball->x = x;
    ball->y = y;
    ball->xV = xV;
    ball->xV = xV;
    ball->radius = radius;
    ball->color = color;

    return ball;
}

void drawBall(Ball* ball) {
    DrawCircle(ball->x, ball->y, ball->radius, ball->color);
}

void updateBall() {
    
}

void setBallPosition(Ball* ball, int x, int  y) {
    
}

void setSpeed(Ball* ball, int xV, int yV) {
    ball->xV = xV;
    ball->yV = yV;
}