#pragma once
#include <iostream>
#include <Windows.h>
#include "Player.h"
#include "HumanPlayer.h"
#include "ComputerPlayer.h"
#include "ColorDesign.h"

class Game {

private:
    Player* player1;
    Player* player2;
    int rounds;
    int scorePlayer1;
    int scorePlayer2;
public:
    Game(Player* p1, Player* p2, int numRounds);
    void play();
    std::wstring getGestureSymbol(int gesture);
};