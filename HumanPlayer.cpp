#include "HumanPlayer.h"
#include "ColorDesign.h"
HumanPlayer::HumanPlayer(std::string playerName) : Player(playerName) {};

int HumanPlayer::chooseGesture() {
    int choice;
    bool validChoice = false;

    do {
        ColorCYN
        std::cout << "��� ���� (0 - ��������� ��� , 1 - �����, 2 - ������, 3 - ���� ): ";
        std::cin >> choice;
        ColorZero

        if (std::cin.fail() || choice < 0 || choice > 3) {
            system("cls");
            ColorRED
            std::cout << "������������ ����. ���� �����, ��������� �� ���.\n";
            ColorZero
            std::cin.clear();
            while (std::cin.get() != '\n') {} // �������� ������� ��������
        }
        else {
            validChoice = true;
        }
    } while (!validChoice);

    return choice;
};