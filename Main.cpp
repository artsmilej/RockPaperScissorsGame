#include <iostream>
#include <ctime>
#include <Windows.h>
#include <string>
#include "Game.h"
#include "ColorDesign.h"

int main() {

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand(time(0)); // ���������� ��������� ���������� �����

    const int minNameLength = 5;
    const int maxNameLength = 20;

    std::string playerName;
    ColorBLU
    std::cout << "+-------------------------------+" << "\n";
    std::cout << "|";
    ColorGRN
    std::cout << "      ������ ��� ������      ";
    ColorBLU
    std::cout << "|" << "\n";
    ColorYEL
    std::cout << "+-------------------------------+" << "\n";
    ColorZero

    ColorCYN
    std::cout << "(������� ������� �� ����� 5 ������� �� �� ����� 20) \n\n";
    std::cout << "ͳ����� : ";
    ColorZero

    ColorCYN
    std::cin >> playerName;
    ColorZero

    while (playerName.length() < minNameLength || playerName.length() > maxNameLength) {
        ColorRED
        std::cout << "������������ ������� �������. ������ ������ � " << minNameLength << " �� " << maxNameLength << " �������: ";
        ColorZero
        ColorCYN
        std::cin >> playerName;
        ColorZero
    }
    system("cls");
    HumanPlayer human(playerName);
    ComputerPlayer computer;

    const int minRounds = 1;
    const int maxRounds = 11;
    int numRounds;
    

    do {
        ColorBLU
        std::cout << "+-------------------------------+" << "\n";
        std::cout << "|";
        ColorGRN
        std::cout << "    ������ ������� ������  ";
        ColorBLU
        std::cout << "|" << "\n";
        ColorYEL
        std::cout << "+-------------------------------+" << "\n";
        ColorZero

        ColorCYN
        std::cout << "(MAX 11) \n\n";
        std::cout << "��� ���� : ";
        ColorZero

        ColorCYN
        std::cin >> numRounds;
        ColorZero

        if (std::cin.fail() || numRounds < 1 || numRounds > 11) {
            system("cls");
            std::cin.clear();
            std::cin.ignore(10000000, '\n');
            ColorRED
            std::cout << "������������ ������� ������. ������ ������� ������ �� " << minRounds << " �� " << maxRounds << ": \n";
            ColorZero
        }
    } while (std::cin.fail() || numRounds < 1 || numRounds > 11);

    system("cls");

    Game game(&human, &computer, numRounds);

    ColorBLU
    std::cout << "+-------------------------------+" << "\n";
    std::cout << "|";
    ColorGRN
    std::cout << "       ��� �����������      ";
    ColorBLU
    std::cout << "   |" << "\n";
    ColorYEL
    std::cout << "+-------------------------------+" << "\n";
    ColorZero

    game.play();

    return 0;
}