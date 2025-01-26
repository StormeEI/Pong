#include "paddle.h"

Paddle* createPaddle(int x, int y, int yV, Color color) {
    Paddle p;
    p.x = x;
    p.y = y;
    p.yV = yV;
    p.color = color;
}

void movePaddle(Paddle* p) {
    p->y += p->yV
}

void hitBall() {

}

void setPaddlePosition(Paddle* p, int x, int y) {
    p->x = x;
    p->y = y;
}
