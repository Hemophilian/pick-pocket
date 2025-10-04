#include "global.hpp"
using namespace std;

const int ScreenWidth = 960;
const int ScreenHeight = 540;

Colliders objWall;
Player objPlayer;
Camera2D camera;

int main() {
    InitWindow(ScreenWidth, ScreenHeight, "Pick Pocket");
    SetTargetFPS(60);

    camera.target = objPlayer.position;
    camera.offset = (Vector2){ScreenWidth/2.0f, ScreenHeight/2.0f };
    camera.rotation = 0.0f;
    camera.zoom = 2.5f;

    while (!WindowShouldClose())
    {
            objPlayer.Movement();
            ArrayCollision();
            camera.target = objPlayer.position;

        BeginDrawing();
            ClearBackground(BLACK);
            LoadMenu_Main();
                BeginMode2D(camera);
                    DrawColliders();
                    DrawRectangle(960/2, 540/2, 16, 16, MAROON);
                    objPlayer.DrawSelf();
                EndMode2D();
        EndDrawing();
    }
    
    CloseWindow();
    return 1;
}

void Colliders::DrawSelf() {
    DrawRectangle(position.x, position.y, size.x, size.y, WHITE);
}