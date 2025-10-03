#include <iostream>
#include <raylib.h>
#include "hpp-files/player.hpp"

using namespace std;

int main() {
    InitWindow(960, 540, "Pick Pocket");
    SetTargetFPS(60);

    Player objPlayer;

    while (!WindowShouldClose())
    {
            objPlayer.Movement();;
        BeginDrawing();
            ClearBackground(BLACK);

            DrawRectangle(960/2, 540/2, 16, 16, MAROON);
            objPlayer.DrawSelf();
        EndDrawing();
    }
    
    CloseWindow();
    return 1;
}