#include <main.h>
#include <stdio.h>
#include "raylib.h"

int main() {
    InitWindow(800,600,"shitFart");
    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}