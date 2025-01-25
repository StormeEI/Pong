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

/*if(WIN32)
    target_link_libraries(Pong Winmn.lib)
elseif(UNIX)
    target_link_libraries(Pong m pthread dl)
endif()*/