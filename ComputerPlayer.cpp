#include "ComputerPlayer.h"

ComputerPlayer::ComputerPlayer() : Player("����'����") {};

int ComputerPlayer::chooseGesture() {
    return rand() % 3 + 1; // �������� ��������� ����� �� 1 �� 3
};