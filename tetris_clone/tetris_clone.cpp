#include "raylib.h"
#include "Grid.hpp"
#include "Game.hpp"

int main() {

    InitWindow(300, 600, "Tetris Clone C++");
    SetTargetFPS(60);

    Game game = Game();

    while (!WindowShouldClose()) {

        game.handleInput();

        BeginDrawing();
        ClearBackground(RAYWHITE); 

        game.Draw();

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
