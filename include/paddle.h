#ifndef PADDLE_H
#define PADDLE_H
#include <raylib.h>

typedef struct Paddle {
    int x;
    int y;
    int yV;
    Color color;
} Paddle;

/**
 * Creates a new game ball
 * @param x X Position of the paddle
 * @param y y Position of the paddle
 * @param width Internal width of the ball
 * @param height Internal height of the ball
 * @param color Color of the ball
 * 
 * @returns A pointer to the ball
 */
Paddle* createPaddle(int x, int y, int yV, Color color);

void movePaddle(Paddle* paddle);
void drawPaddle(Paddle* paddle);
void setPaddlePosition(Paddle* paddle);

#endif //PADDLE_H