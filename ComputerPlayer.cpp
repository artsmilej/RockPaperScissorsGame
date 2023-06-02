#include "ComputerPlayer.h"

ComputerPlayer::ComputerPlayer() : Player("Комп'ютер") {};

int ComputerPlayer::chooseGesture() {
    return rand() % 3 + 1; // Генеруємо випадкове число від 1 до 3
};