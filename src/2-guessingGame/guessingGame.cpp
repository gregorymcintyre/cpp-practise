//guessingGame.cpp
#include <iostream>
#include "guessingGame.h"

using namespace std;

void guessingGame(){
    // Random seed
    srand (time(NULL));

    int randNum = rand() % 10 + 1;
    bool found = false;
    int guess;
    int tries = 0;      //guesses, guess count

    cout << "Please guess a number between 1 and 10: ";
    while (found != true)
    {
        cin >> guess;
        //TODO: error catch for char
        ++tries;
        if (guess > randNum) {
            cout << "Too high, please try again." << endl;
        } else if(guess < randNum){
            cout << "Too low, please try again." << endl;
        }
        else found = true;      //break;
    }
    cout << "Correct! The number was " << randNum << " it took you " << tries << " guesses."<< endl;
}