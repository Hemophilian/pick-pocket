#include "../include/global.hpp"

const Vector2 tileSize = (Vector2){16.0f, 16.0f};
const int arrayWidth = 8;
const int arrayHeight = 8;

void Player::Collision(Vector2 objPos, Vector2 objSize)
{
    if (CheckCollisionRecs(Rectangle{position.x, position.y, size.x, size.y}, Rectangle{objPos.x, objPos.y, objSize.x, objSize.y} )) {
        // Player-Right / Wall-Left
    if (startPos.x + size.x <= objPos.x) {
        position.x = objPos.x - size.x; currentFace = RIGHT;
    }   // Player-Left / Wall-Right
    if (startPos.x >= objPos.x + objSize.x) {
        position.x = objPos.x + objSize.x; currentFace = LEFT;
    }   // Player-Bottom / Wall-Top
    if (startPos.y + size.y <= objPos.y) {
        position.y = objPos.y - size.y; currentFace = BOTTOM;
    }   // Player-Top / Wall-Bottom
    if (startPos.y >= objPos.y + objSize.y) {
        position.y = objPos.y + objSize.y; currentFace = TOP;
    } } }

int tiles[arrayWidth][arrayHeight] = {
  { 0, 0, 0, 0, 0, 0, 0, 0},
  { 0, 1, 0, 0, 0, 0, 1, 0},
  { 0, 0, 0, 0, 0, 0, 0, 0},
  { 0, 0, 0, 0, 0, 0, 0, 0},
  { 0, 0, 0, 0, 0, 0, 0, 0},
  { 0, 0, 0, 0, 0, 0, 0, 0},
  { 0, 1, 0, 0, 0, 0, 1, 0},
  { 0, 0, 0, 0, 0, 0, 0, 0}
};

void ArrayCollision() {
    for (int y = 0; y < arrayHeight; y++) {
        for (int x = 0; x < arrayWidth; x++) {
            switch (tiles[x][y]) {
                case 1: { objPlayer.Collision((Vector2){ y * tileSize.x, x * tileSize.y }, tileSize); } break;
} } } }
void DrawColliders() {
    for (int y = 0; y < arrayHeight; y++) {
        for (int x = 0; x < arrayWidth; x++) {
            switch (tiles[x][y]) {
                case 0: { DrawRectangleLines(y * tileSize.x, x * tileSize.y, tileSize.x, tileSize.y, GREEN); } break;
                case 1: { DrawRectangleLines(y * tileSize.x, x * tileSize.y, tileSize.x, tileSize.y, RED); } break;
} } } }