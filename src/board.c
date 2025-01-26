#include "board.h"

Board* createBoard(int x, int y, int width, int height, int borderWidth, Color borderColor){
    Board* board = malloc(sizeof(Board));

    //Set board values
    board->x = x;
    board->y = y;

    board->width = width;
    board->height = height;

    board->borderColor = borderColor;

    //Generate Walls
    board->wallT = createWall(x, y - borderWidth, width, borderWidth, borderColor);
    board->wallB = createWall(x, y + height, width, borderWidth, borderColor);
    board->wallR = createWall(x + width, y - borderWidth, borderWidth, height + 2 * borderWidth, borderColor);
    board->wallL = createWall(x - borderWidth, y - borderWidth, borderWidth, height + 2 * borderWidth, borderColor);

    return board;
}

void updateBoard(Board* board){
    updateBall(board->ball);

    if(IsKeyDown(KEY_W)){

    }

    if(IsKeyDown(KEY_S)){

    }

    if(IsKeyDown(KEY_UP)){

    }

    if(IsKeyDown(KEY_DOWN)){
        
    }
}

void drawBoard(Board* board){
    //Draw all board walls
    DrawRectangle(board->wallT->x, board->wallT->y, board->wallT->width, board->wallT->height, board->borderColor);
    DrawRectangle(board->wallB->x, board->wallB->y, board->wallB->width, board->wallB->height, board->borderColor);
    DrawRectangle(board->wallR->x, board->wallR->y, board->wallR->width, board->wallR->height, board->borderColor);
    DrawRectangle(board->wallL->x, board->wallL->y, board->wallL->width, board->wallL->height, board->borderColor);

    drawBall(board->ball);
    drawPaddle(board->p1);
    drawPaddle(board->p2);
}

Wall* createWall(int x, int y, int width, int height, Color color) {
    Wall* wall = malloc(sizeof(Wall));

    wall->x = x;
    wall->y = y;

    wall->width = width;
    wall->height = height;

    wall->color = color;

    return wall;
}