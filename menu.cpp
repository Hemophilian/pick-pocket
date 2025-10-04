#include "global.hpp"

MenuOptions_Main Main = MAIN_MENU;
MenuOptions_LevelEditor LevelEditor;

void LoadMenu_Main() 
{
    switch (Main) {
        case MAIN_INACTIVE: break;
        case MAIN_MENU: DrawText("Pick Pocket", 12, 12, 36, WHITE); break;
        case LEVEL_EDITOR:  break;
    }
}

void LoadMenu_LevelEditor(){
    switch (LevelEditor) {
        case LEVEL_EDITOR_INACTIVE:  break;
    }
}