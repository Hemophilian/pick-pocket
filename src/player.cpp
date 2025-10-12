#include "../include/global.hpp"
playerState currentState = MOVE;

void Player::Positioning() {
    startPos = position;
}

void Player::Gravity() {
    velocity -= gravity;
    height += velocity;
    if (height < 0) { height = 0; velocity = 0; }
}
void Player::Movement() {
    if (((IsKeyDown(KEY_SPACE)) && (velocity == 0))) { velocity += 4;}
    if (IsKeyDown(KEY_LEFT_SHIFT)) { speedAmp = 0.40f; } else { speedAmp = 0.0f; }
    if (IsKeyDown(KEY_W)) { position.y -= (speed + speedAmp); }
    if (IsKeyDown(KEY_S)) { position.y += (speed + speedAmp); }
    if (IsKeyDown(KEY_A)) { position.x -= (speed + speedAmp); }
    if (IsKeyDown(KEY_D)) { position.x += (speed + speedAmp); }
}

void Player::updateState() {
    switch(currentState) {
        // Movement
        case IDLE: Gravity(); Movement(); Positioning(); break;
        case MOVE: Gravity(); Movement(); Positioning(); break;
        case DASH: break;
        case JUMP: Gravity(); Movement(); Positioning(); break;
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