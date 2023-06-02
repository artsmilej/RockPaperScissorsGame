#include "HumanPlayer.h"

HumanPlayer::HumanPlayer(std::string playerName) : Player(playerName) {};

int HumanPlayer::chooseGesture() {
    int choice;
    bool validChoice = false;

    do {
        std::cout << "\033[0;36m";
        std::cout << "Ваш вибір (0 - завершити гру , 1 - камінь, 2 - ножиці, 3 - папір ): ";
        std::cin >> choice;
        std::cout << "\033[0m";

        if (std::cin.fail() || choice < 0 || choice > 3) {
            system("cls");
            std::cout << "\033[0;31m";
            std::cout << "Неправильний вибір. Будь ласка, спробуйте ще раз.\n";
            std::cout << "\033[0m";
            std::cin.clear();
            while (std::cin.get() != '\n') {} // Очищення залишків введення
        }
        else {
            validChoice = true;
        }
    } while (!validChoice);

    return choice;
};