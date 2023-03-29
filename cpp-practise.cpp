// Your First C++ Program

#include <iostream>
#include "src/1-arrayInOut/arrayInOut.h"
#include "src/2-guessingGame/guessingGame.h"
#include "src/3-calculator/calculator.h"

using namespace std;

int main(int argc, char* argv[]) {
    int choice;

    std::cout << "=======================\n" << "cprogramming challenges\n" << "=======================\n" << endl;
    cout << "Enter challenge number ";
    cin >> choice;
    cout << endl;

    switch (choice)
    {
    case 1:
        cout << "1. Array In Out\n=======================" << endl;
        arrayInOut();
        break;

    case 2:
        cout << "2. Guessing Game\n=======================" << endl;
        guessingGame();
        break;

    case 3:
        cout << "3. Calculator\n=======================" << endl;
        calculator();
        break;

    default:
        cout << "Exiting....now\n=======================" << endl;
        break;
    }

    return 0;
}