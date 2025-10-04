#include "global.hpp"

void Player::Movement()
{
    startPos = position;
    velocity -= gravity;
    height += velocity;
    if (height < 0) { height = 0; velocity = 0; }
    if (((IsKeyDown(KEY_SPACE)) && (velocity == 0))) { velocity += 3;}

    if (IsKeyDown(KEY_W)) { position.y -= 1; }
    if (IsKeyDown(KEY_S)) { position.y += 1; }
    if (IsKeyDown(KEY_A)) { position.x -= 1; }
    if (IsKeyDown(KEY_D)) { position.x += 1; }
}

void Player::DrawSelf()
{
    DrawEllipse(position.x + 8, position.y+8, 8, 3, DARKGRAY);
    DrawCircle(position.x + 8, position.y - height, 8, WHITE);
    DrawRectangleLines(position.x, position.y, size.x, size.y, RED); // Shows your Collision Box
}