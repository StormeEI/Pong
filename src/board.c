#include "board.h"

Board* createBoard(int x, int y, int width, int height, int borderWidth, Color borderColor){
    Board b;
    b.x = x;
    b.y = y;
    b.width = width;
    b.height = height;
    b.borderColor = borderColor;

    return &b;
}