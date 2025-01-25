#ifndef BOARD_H
#define BOARD_H
#include <raylib.h>

typedef struct Board {
    int x;
    int y;

    int width;
    int height;

    int borderWidth;

    //TODO: Add Ball Reference
    //TODO: Add 2 Paddle Reference

    Color borderColor;
} Board;

/**
 * Creates a new game board
 * @param x X Position of the board
 * @param y y Position of the board
 * @param width Internal width of the board
 * @param height Internal height of the board
 * @param color Color of the board
 * 
 * @returns A pointer to the board
 */
Board* createBoard(int x, int y, int width, int height, int borderWidth, Color color);
#endif //BOARD_H