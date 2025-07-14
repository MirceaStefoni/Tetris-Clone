#include "raylib.h"
#include "Grid.hpp"
#include "Tetrominos.cpp"

int main() {

    InitWindow(300, 600, "Tetris Clone C++");
    SetTargetFPS(60);

    Grid gameGrid = Grid();
    gameGrid.gridPrint();


    while (!WindowShouldClose()) {

        BeginDrawing();
        ClearBackground(RAYWHITE);
        gameGrid.gridDraw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
