#include <main.h>

int main() {
    Board* b = createBoard(150, 150, 500, 300,15, BLACK);
    Ball* ball = createBall(100,100,10,10,50,BLACK);
    Paddle* paddle = createPaddle(100,100,10,BLACK);

    InitWindow(800,600,"shitFart");
    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        drawBoard(b);
        drawBall(ball);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
