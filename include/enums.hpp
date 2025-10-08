enum devMenu { 
    INACTIVE, INITIAL_MENU, PLAYER
};

enum playerState {
    // Movement States
    IDLE, WALK, RUN, JUMP, DASH, DESCEND, FALL,
    // Action States
    ATTACK, SCAVENGE,
    // Interaction States
    DAMAGED
};

enum playerTouching {
    NONE, TOP, BOTTOM, LEFT, RIGHT
};