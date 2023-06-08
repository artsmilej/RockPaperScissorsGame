#include "HumanPlayer.h"
#include "ColorDesign.h"
HumanPlayer::HumanPlayer(std::string playerName) : Player(playerName) {};

int HumanPlayer::chooseGesture() {
    int choice;
    bool validChoice = false;

    do {
        ColorCYN
        std::cout << "Ваш вибір (0 - завершити гру , 1 - камінь, 2 - ножиці, 3 - папір ): ";
        std::cin >> choice;
        ColorZero

        if (std::cin.fail() || choice < 0 || choice > 3) {
            system("cls");
            ColorRED
            std::cout << "Неправильний вибір. Будь ласка, спробуйте ще раз.\n";
            ColorZero
            std::cin.clear();
            while (std::cin.get() != '\n') {} // Очищення залишків введення
        }
        else {
            validChoice = true;
        }
    } while (!validChoice);

    return choice;
};