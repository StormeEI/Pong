#include "ball.h"

Ball* createBall(int x, int y, int xV, int yV, int radius, Color color) {
    Ball* b = malloc(sizeof(Ball));
    b->x = x;
    b->y = y;
    b->xV = xV;
    b->xY = xY;
    b->radius = radius
    b->color = color;
}

void drawBall(int x, int y, int radius) {
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