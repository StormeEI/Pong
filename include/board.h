#ifndef BOARD_H
#define BOARD_H
#include <stdlib.h>
#include <raylib.h>
#include "ball.h"
#include "paddle.h"

typedef struct Wall{
    int x;
    int y;

    int width;
    int height;

    Color color;
} Wall;

typedef struct Board {
    int x;
    int y;

    int width;
    int height;

    int borderWidth;

    Wall* wallT; //Top wall
    Wall* wallB; //Bottom wall
    Wall* wallR; //Left wall
    Wall* wallL; //Right wall

    Ball* ball;

    Paddle* p1; //Left paddle
    Paddle* p2; //Right paddle

    Color borderColor;
} Board;

/**
 * Creates a new game board
 * @param x X Position of the board
 * @param y y Position of the board
 * @param width Internal width of the board
 * @param height Internal height of the board
 * @param borderColor Color of the board walls
 * 
 * @returns A pointer to the board
 */
Board* createBoard(int x, int y, int width, int height, int borderWidth, Color borderColor);

void updateBoard(Board *board);

void drawBoard(Board *board);

/**
 * Creates a new wall
 * @param x X Position of the wall
 * @param y Y Position of the wall
 * @param width Width of the wall
 * @param height Height of the wall
 * @param color Color of the wall
 */
Wall* createWall(int x, int y, int width, int height, Color color);

void drawWall();
#endif //BOARD_H