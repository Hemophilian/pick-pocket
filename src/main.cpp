#include "../include/global.hpp"
using namespace std;

const int ScreenWidth = 960;
const int ScreenHeight = 540;

Player objPlayer;
Camera2D camera;

int main() {
    InitWindow(ScreenWidth, ScreenHeight, "Pick Pocket");
    SetTargetFPS(60);
    GenerateAssetArrays();

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
                BeginMode2D(camera);
                    DrawColliders();
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