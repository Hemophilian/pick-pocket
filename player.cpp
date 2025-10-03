#include "hpp-files/player.hpp"

void Player::Movement()
{
    Velocity -= Gravity;
    Height += Velocity;
    if (Height < 0) { Height = 0; Velocity = 0; }
    if (((IsKeyDown(KEY_SPACE)) && (Velocity == 0))) { Velocity += 3;}

    if (IsKeyDown(KEY_W)) { PosY -= 1; }
    if (IsKeyDown(KEY_S)) { PosY += 1; }
    if (IsKeyDown(KEY_A)) { PosX -= 1; }
    if (IsKeyDown(KEY_D)) { PosX += 1; }
}

void Player::DrawSelf()
{
    DrawEllipse(PosX, PosY+8, 8, 3, DARKGRAY);
    DrawCircle(PosX, PosY-Height, 8, WHITE); 
}