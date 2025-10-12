#include <raylib.h>
#include <raymath.h>
#include <iostream>
#include <map>
#include "enums.hpp"
using namespace std;

class Player {
    public:
        Vector2 position = Vector2Zero();
        Vector2 startPos = Vector2Zero();
        Vector2 size = (Vector2) {16.0f, 8.0f};
        float height = 0.0f, velocity = 0.0f, gravity = 0.15f, speed = 1, speedAmp = 0.0f;
        void Collision(Vector2 objPos, Vector2 objSize); // Checks collisions (Duh)
        void updateState();
        void drawState();
        // State Functions
        void Positioning();
        void Movement();
        void Gravity();
    private:
};

extern Player objPlayer;

class Colliders {
    public:
        Vector2 position;
        Vector2 size = (Vector2) {16.0f, 8.0f};
        void DrawSelf(); // Draws the wall (Duh)
    private:
};

extern Colliders objWall;
extern Player objPlayer;

// Functions Section
    // Menu.cpp Functions
    void DrawDevMenu();
    // collisions.cpp Functions
    void ArrayCollision();
    void DrawColliders();
    // loader.cpp Functions
    void LoadGameAssets();