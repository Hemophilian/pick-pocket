#include <iostream>
#include <raylib.h>

class Player {
    public:
        int PosX = GetScreenWidth()/2, PosY = GetScreenHeight()/2, Height = 0;
        float Velocity = 0, Gravity = 0.15;
        void Movement();
        void DrawSelf();
    private:
};