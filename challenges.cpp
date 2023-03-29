// Your First C++ Program

#include <iostream>
#include "1-arrayInOut/arrayInOut.h"
#include "2-guessingGame/guessingGame.h"
#include "3-calculator/calculator.h"

using namespace std;

int main() {
    int choice;

    std::cout << "=======================\n" << "cprogramming challenges-maker\n" << "=======================\n" << endl;
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