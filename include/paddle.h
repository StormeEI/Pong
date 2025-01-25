#ifndef PADDLE_H
#define PADDLE_H

typedef struct Paddle {
    int x;
    int y;
    int yV;
    Color color;
} Paddle;

void move();
void hitBall();
void setPosition();

#endif //PADDLE_H