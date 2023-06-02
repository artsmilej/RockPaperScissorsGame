#pragma once
#include <iostream>

class Player {

protected:
    std::string name;
public:
    Player(std::string playerName);
    virtual int chooseGesture() = 0;
    std::string getName();
};

