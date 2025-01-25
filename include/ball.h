#ifndef BALL_H
#define BALL_H  

#include <raylib.h>

typedef struct Ball {
    int x;
    int y;
    int xV;
    int yV;
    Color color;
} Ball;

void draw();
void update();
void setPosition();
void setSpeed();

#endif //BALL_H