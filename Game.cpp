#include "Game.h"

Game::Game(Player* p1, Player* p2, int numRounds) : player1(p1), player2(p2), rounds(numRounds), scorePlayer1(0), scorePlayer2(0) {};

void Game::play() {
    for (int round = 1; round <= rounds; round++) {
        std::cout << "\033[0;34m";
        std::cout << "+-------------------------------+" << "\n";
        std::cout << "|";
        std::cout << "\033[0;32m";
        std::cout << "           Раунд ";
        std::cout << round<<"             ";
        std::cout << "\033[0;34m";
        std::cout << "|" << "\n";
        std::cout << "\033[0;33m";
        std::cout << "+-------------------------------+" << "\n";
        std::cout << "\033[0m";
        int gesture1 = player1->chooseGesture();
        int gesture2 = player2->chooseGesture();

        // Перевірка на вихід з гри
        if (gesture1 == 0 || gesture2 == 0) {
            std::cout << "\033[0;33m";
            std::cout << "Гра була завершена користувачем." << "\n";
            std::cout << "\033[0m";
            return;
        }
        std::cout << "\033[0;36m";
        std::cout << player1->getName() << " обрав: " << "\n";
        std::cout << "\033[0m";
        std::wcout << getGestureSymbol(gesture1) << "\n";
        std::cout << "\033[0;36m";
        std::cout << player2->getName() << " обрав: " << "\n";
        std::cout << "\033[0m";
        std::wcout << getGestureSymbol(gesture2) << "\n";

        if (gesture1 == gesture2) {
            std::cout << "\033[0;33m";
            std::cout << "Нічия!" << "\n";
            std::cout << "\033[0m";
        }
        else if ((gesture1 == 1 && gesture2 == 2) ||
            (gesture1 == 2 && gesture2 == 3) ||
            (gesture1 == 3 && gesture2 == 1)) {
            std::cout << "\033[0;32m";
            std::cout << player1->getName() << " переміг раунд!" << "\n";
            std::cout << "\033[0m";
            scorePlayer1++;
        }
        else {
            std::cout << "\033[0;31m";
            std::cout << player2->getName() << " переміг раунд!" << "\n";
            std::cout << "\033[0m";
            scorePlayer2++;
        }
        std::cout << "\033[0;36m";
        std::cout << "---------------------------" << "\n";
        std::cout << "\033[0m";
        Sleep(4000);
        system("cls");
    }

    std::cout << "\033[0;34m";
    std::cout << "+-------------------------------+" << "\n";
    std::cout << "|";
    std::cout << "\033[0;32m";
    std::cout << "      Підсумковий рахунок      ";
    std::cout << "\033[0;34m";
    std::cout << "|" << "\n";
    std::cout << "\033[0;33m";
    std::cout << "+-------------------------------+" << "\n";
    std::cout << "\033[0m";
    std::cout << "\033[0;36m";
    std::cout << player1->getName() << ": " << scorePlayer1 << "\n";
    std::cout << player2->getName() << ": " << scorePlayer2 << "\n";
    std::cout << "\033[0;35m";
    std::cout << "+-------------------------------+" << "\n";
    std::cout << "\033[0m";

    if (scorePlayer1 > scorePlayer2) {
        std::cout << "\033[0;32m";
        std::cout << player1->getName() << " переміг у грі!" << "\n";
        std::cout << "\033[0m";
    }
    else if (scorePlayer1 < scorePlayer2) {
        std::cout << "\033[0;31m";
        std::cout << player2->getName() << " переміг у грі!" << "\n";
        std::cout << "\033[0m";
    }
    else {
        std::cout << "\033[0;33m";
        std::cout << "Гра закінчилася внічию!" << "\n";
        std::cout << "\033[0m";
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