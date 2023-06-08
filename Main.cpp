#include <iostream>
#include <ctime>
#include <Windows.h>
#include <string>
#include "Game.h"
#include "ColorDesign.h"

int main() {

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand(time(0)); // Ініціалізуємо генератор випадкових чисел

    const int minNameLength = 5;
    const int maxNameLength = 20;

    std::string playerName;
    ColorBLU
    std::cout << "+-------------------------------+" << "\n";
    std::cout << "|";
    ColorGRN
    std::cout << "      Введіть ваш нікнейм      ";
    ColorBLU
    std::cout << "|" << "\n";
    ColorYEL
    std::cout << "+-------------------------------+" << "\n";
    ColorZero

    ColorCYN
    std::cout << "(Довжина нікнейму не менше 5 символів та не більше 20) \n\n";
    std::cout << "Нікнейм : ";
    ColorZero

    ColorCYN
    std::cin >> playerName;
    ColorZero

    while (playerName.length() < minNameLength || playerName.length() > maxNameLength) {
        ColorRED
        std::cout << "Неприпустима довжина нікнейма. Введіть нікнейм з " << minNameLength << " до " << maxNameLength << " символів: ";
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
        std::cout << "    Введіть кількість раундів  ";
        ColorBLU
        std::cout << "|" << "\n";
        ColorYEL
        std::cout << "+-------------------------------+" << "\n";
        ColorZero

        ColorCYN
        std::cout << "(MAX 11) \n\n";
        std::cout << "Ваш вибір : ";
        ColorZero

        ColorCYN
        std::cin >> numRounds;
        ColorZero

        if (std::cin.fail() || numRounds < 1 || numRounds > 11) {
            system("cls");
            std::cin.clear();
            std::cin.ignore(10000000, '\n');
            ColorRED
            std::cout << "Неприпустима кількість раундів. Введіть кількість раундів від " << minRounds << " до " << maxRounds << ": \n";
            ColorZero
        }
    } while (std::cin.fail() || numRounds < 1 || numRounds > 11);

    system("cls");

    Game game(&human, &computer, numRounds);

    ColorBLU
    std::cout << "+-------------------------------+" << "\n";
    std::cout << "|";
    ColorGRN
    std::cout << "       Гра розпочалася      ";
    ColorBLU
    std::cout << "   |" << "\n";
    ColorYEL
    std::cout << "+-------------------------------+" << "\n";
    ColorZero

    game.play();

    return 0;
}