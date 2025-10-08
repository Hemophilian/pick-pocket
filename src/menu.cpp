#include "../include/global.hpp"

devMenu currentDevMenu = PLAYER;
playerTouching currentFace = NONE;

void DrawDevMenu() {
    switch (currentDevMenu) {
        case INACTIVE: break;
        case INITIAL_MENU: 
            DrawText("Pick Pocket", 12, 12, 24, WHITE);
            DrawText("Dev Menu", 12, 32, 16, WHITE);
        break;
        case PLAYER:
            DrawText("Return", 12, 12, 20, WHITE);
            DrawText(TextFormat("Player Height: %.1f", objPlayer.height), 12, 32, 20, WHITE);
          //  switch(currentFace){
          //      case NONE: DrawTextureEx(, Vector2{880, 16}, 0, 0.5f, WHITE); break;
          //   }
} };