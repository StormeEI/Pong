#include "paddle.h"

Paddle* createPaddle(int x, int y, int yV, int width, int height, Color color) {
    Paddle paddle;
    paddle.x = x;
    paddle.y = y;
    paddle.yV = yV;
    paddle.width = width;
    paddle.height = height;
    paddle.color = color;
}

void movePaddle(Paddle* paddle) {
    paddle->y += paddle->yV;
}

void setPaddlePosition(Paddle* paddle, int x, int y) {
    paddle->x = x;
    paddle->y = y;
}
