#include <iostream>
#include <ctime>
#include <Windows.h>
#include <string>
#include "Game.h"
#include "ColorDesign.h"

int main() {

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand(time(0)); // ≤н≥ц≥ал≥зуЇмо генератор випадкових чисел

    std::string playerName;
    std::cout << "\033[0;34m";
    std::cout << "+-------------------------------+" << "\n";
    std::cout << "|";
    std::cout << "\033[0;32m";
    std::cout << "      ¬вед≥ть ваш н≥кнейм      ";
    std::cout << "\033[0;34m";
    std::cout << "|" << "\n";
    std::cout << "\033[0;33m";
    std::cout << "+-------------------------------+" << "\n";
    std::cout << "\033[0m";

    std::cout << "\033[0;36m";
    std::cin >> playerName;
    std::cout << "\033[0m";

    HumanPlayer human(playerName);
    ComputerPlayer computer;

    int numRounds;
    std::cout << "\033[0;34m";
    std::cout << "+-------------------------------+" << "\n";
    std::cout << "|";
    std::cout << "\033[0;32m";
    std::cout << "    ¬вед≥ть к≥льк≥сть раунд≥в  ";
    std::cout << "\033[0;34m";
    std::cout << "|" << "\n";
    std::cout << "\033[0;33m";
    std::cout << "+-------------------------------+" << "\n";
    std::cout << "\033[0m";

    std::cout << "\033[0;36m";
    std::cin >> numRounds;
    std::cout << "\033[0m";
    system("cls");

    Game game(&human, &computer, numRounds);

    std::cout << "\033[0;34m";
    std::cout << "+-------------------------------+" << "\n";
    std::cout << "|";
    std::cout << "\033[0;32m";
    std::cout << "       √ра розпочалас€      ";
    std::cout << "\033[0;34m";
    std::cout << "   |" << "\n";
    std::cout << "\033[0;33m";
    std::cout << "+-------------------------------+" << "\n";
    std::cout << "\033[0m";

    game.play();

    return 0;
}