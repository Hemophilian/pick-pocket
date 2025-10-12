#include "../include/global.hpp"

void Player::Positioning() {
    startPos = position;
}

void Player::Gravity() {
    velocity -= gravity;
    height += velocity;
    if (height < 0) { height = 0; velocity = 0; }
}
void Player::Movement() {
    if (((IsKeyDown(KEY_SPACE)) && (velocity == 0))) { velocity += 3;}
    if (IsKeyDown(KEY_W)) { position.y -= 1; }
    if (IsKeyDown(KEY_S)) { position.y += 1; }
    if (IsKeyDown(KEY_A)) { position.x -= 1; }
    if (IsKeyDown(KEY_D)) { position.x += 1; }
}

void Player::updateState() {
    switch(currentState) {
        // Movement
        case IDLE: Positioning(); Gravity(); Movement(); break;
        case MOVE: Positioning(); Gravity(); Movement(); break;
        case DASH: break;
        case JUMP: Positioning(); Gravity(); Movement(); break;
        case DESCEND: break;
        case FALL: break;
        // Actions
        case ATTACK: break;
        case SCAVENGE: break;
        // Interactions
        case DAMAGED: break;
} };

void Player::drawState() {
    switch(currentState) {
        // Movement
        case IDLE: 
            DrawEllipse(position.x + 8, position.y+8, 8, 3, DARKGRAY);
            DrawCircle(position.x + 8, position.y - height, 8, WHITE);
            DrawRectangleLines(position.x, position.y, size.x, size.y, RED); // Shows your Collision Box
        break;
        case MOVE:
            DrawEllipse(position.x + 8, position.y+8, 8, 3, DARKGRAY);
            DrawCircle(position.x + 8, position.y - height, 8, WHITE);
            DrawRectangleLines(position.x, position.y, size.x, size.y, RED); // Shows your Collision Box
        break;
        case DASH: break;
        case JUMP: break;
        case DESCEND: break;
        case FALL: break;

        // Actions
        case ATTACK: break;
        case SCAVENGE: break;

        // Interactions
        case DAMAGED: break;
} };