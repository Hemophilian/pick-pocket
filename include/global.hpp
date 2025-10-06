#include <iostream>
#include <raylib.h>
#include <raymath.h>

enum menuOptions { 
    MAIN_INACTIVE, MAIN_MENU, LEVEL_EDITOR 
};

enum MenuOptions_LevelEditor {
    LEVEL_EDITOR_INACTIVE   
};

enum playerState {
    // Movement States
    IDLE, WALK, RUN, JUMP, DASH, DESCEND, FALL,
    // Action States
    ATTACK, SCAVENGE,
    // Interaction States
    DAMAGED
};

extern menuOptions currentMenu;

// Functions Section
    // Menu.cpp Functions
    void LoadMenu_Main();
    void LoadMenu_LevelEditor();

class Player {
    public:
        Vector2 position = Vector2Zero();
        Vector2 startPos = Vector2Zero();
        Vector2 size = (Vector2) {16.0f, 8.0f};
        float height = 0;
        float velocity = 0, gravity = 0.15;
        void Movement(); // Handles all the Movement (Duh)
        void DrawSelf(); // Draws the player charater (Duh)
        void Collision(Vector2 objPos, Vector2 objSize); // Checks collisions (Duh)
        void updateState();
        void drawState();
    private:
};

class Colliders {
    public:
        Vector2 position;
        Vector2 size = (Vector2) {16.0f, 8.0f};
        void DrawSelf(); // Draws the wall (Duh)
    private:
};

extern Colliders objWall;
extern Player objPlayer;

void ArrayCollision();
void DrawColliders();