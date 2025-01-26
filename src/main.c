#include <main.h>

int main() {
    Board* b = createBoard(5, 5, 100, 100, 5, BLACK);
    
    InitWindow(800,600,"shitFart");
    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        drawBoard(b);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
