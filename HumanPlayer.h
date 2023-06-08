#pragma once
#include <iostream>
#include "Player.h"

class HumanPlayer : public Player {

public:
    HumanPlayer(std::string playerName);
    int chooseGesture();
};