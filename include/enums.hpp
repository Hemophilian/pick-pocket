enum devMenu { 
    INACTIVE, INITIAL_MENU, PLAYER
};

enum playerState {
    // Movement States
    IDLE, MOVE, JUMP, DASH, DESCEND, FALL,
    // Action States
    ATTACK, SCAVENGE,
    // Interaction States
    DAMAGED
};

enum playerTouching {
    NONE, TOP, BOTTOM, LEFT, RIGHT
};

extern playerTouching currentFace;
extern devMenu currentDevMenu;