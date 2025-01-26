#ifndef PADDLE_H
#define PADDLE_H
#include <raylib.h>
#include <stdlib.h>

typedef struct Paddle {
    int x;
    int y;

    int yV;

    int width;
    int height;

    Color color;
} Paddle;

/**
 * Creates a new game ball
 * @param x X Position of the paddle
 * @param y y Position of the paddle
 * @param yV yV Speed of the paddle
 * @param width Width of paddle
 * @param height Height of paddle
 * @param color Color of the ball
 * 
 * @returns A pointer to the ball
 */
Paddle* createPaddle(int x, int y, int yV, int width, int height, Color color);

void movePaddle(Paddle* paddle);

void setPaddlePosition(Paddle* paddle, int x, int y);

#endif //PADDLE_H