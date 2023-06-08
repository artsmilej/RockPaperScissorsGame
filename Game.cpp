#include "Game.h"

Game::Game(Player* p1, Player* p2, int numRounds) : player1(p1), player2(p2), rounds(numRounds), scorePlayer1(0), scorePlayer2(0) {};

void Game::play() {
    for (int round = 1; round <= rounds; round++) {
        ColorBLU
        std::cout << "+-------------------------------+" << "\n";
        std::cout << "|";
        ColorGRN
        std::cout << "           Раунд ";
        std::cout << round<<"             ";
        ColorBLU
        std::cout << "|" << "\n";
        ColorYEL
        std::cout << "+-------------------------------+" << "\n";
        ColorZero
        int gesture1 = player1->chooseGesture();
        int gesture2 = player2->chooseGesture();

        // Перевірка на вихід з гри
        if (gesture1 == 0 || gesture2 == 0) {
            ColorYEL
            std::cout << "Гра була завершена користувачем." << "\n";
            ColorZero
            return;
        }

        ColorCYN
        std::cout << player1->getName() << " обрав: " << "\n";
        ColorZero
        std::wcout << getGestureSymbol(gesture1) << "\n";
        ColorCYN
        std::cout << player2->getName() << " обрав: " << "\n";
        ColorZero
        std::wcout << getGestureSymbol(gesture2) << "\n";

        if (gesture1 == gesture2) {
            ColorYEL
            std::cout << "Нічия!" << "\n";
            ColorZero
        }
        else if ((gesture1 == 1 && gesture2 == 2) ||
            (gesture1 == 2 && gesture2 == 3) ||
            (gesture1 == 3 && gesture2 == 1)) {
            ColorGRN
            std::cout << player1->getName() << " переміг раунд!" << "\n";
            ColorZero
            scorePlayer1++;
        }
        else {
            ColorRED
            std::cout << player2->getName() << " переміг раунд!" << "\n";
            ColorZero
            scorePlayer2++;
        }
        ColorCYN
        std::cout << "---------------------------" << "\n";
        ColorZero
        Sleep(4000);
        system("cls");
    }

    ColorBLU
    std::cout << "+-------------------------------+" << "\n";
    std::cout << "|";
    ColorGRN
    std::cout << "      Підсумковий рахунок      ";
    ColorBLU
    std::cout << "|" << "\n";
    ColorYEL
    std::cout << "+-------------------------------+" << "\n";
    ColorZero
    ColorCYN
    std::cout << player1->getName() << ": " << scorePlayer1 << "\n";
    std::cout << player2->getName() << ": " << scorePlayer2 << "\n";
    ColorMAG
    std::cout << "+-------------------------------+" << "\n";
    ColorZero

    if (scorePlayer1 > scorePlayer2) {
        ColorGRN
        std::cout << player1->getName() << " переміг у грі!" << "\n";
        ColorZero
    }
    else if (scorePlayer1 < scorePlayer2) {
        ColorRED
        std::cout << player2->getName() << " переміг у грі!" << "\n";
        ColorZero
    }
    else {
        ColorYEL
        std::cout << "Гра закінчилася внічию!" << "\n";
        ColorZero
    }
};

std::wstring Game::getGestureSymbol(int gesture) {
    std::wstring symbol;
    if (gesture == 1) {
        std::wcout
            << BLU 
            << L"    _______\n"
            << L"---'   ____)\n"
            << L"      (_____)\n"
            << L"      (_____)\n"
            << L"      (____)\n"
            << L"---.__(___)\n" << WHT;
    }
    else if (gesture == 2) {
        std::wcout
            << YEL 
            << L"    _______\n"
            << L"---'   ____)____\n"
            << L"          ______)\n"
            << L"       __________)\n"
            << L"      (____)\n"
            << L"---.__(___)\n" << WHT;
    }
    else if (gesture == 3) {
        std::wcout
            << GRN 
            << L"    _______\n"
            << L"---'   ____)____\n"
            << L"          ______)\n"
            << L"          _______)\n"
            << L"         _______)\n"
            << L"---.__________)\n" << WHT;
    }
    return symbol;
};