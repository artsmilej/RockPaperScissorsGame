#pragma once
#include <iostream>
#include "Player.h"

class ComputerPlayer : public Player{

public:
    ComputerPlayer();
    int chooseGesture();
};

