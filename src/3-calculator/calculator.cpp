//calculator.cpp
#include <iostream>
#include "calculator.h"

using namespace std;

float multiply (float a, float b){
    return a*b;
}

float add (float a, float b){
    return a+b;
}

float subtract(float a, float b){
    return a-b;
}

float divide(float a, float b){
    return a/b;
}

void calculator(){
    char input;
    float a, b;

    cout << "Please select your function, Add (+), Subtract (-), Multiply (*), Divide (/): ";
    cin >> input;

    switch (input)
    {
    case '+':
        cout << "Please input your values to add: ";
        cin >> a >> b;
        cout << "Result: " << add(a, b);
        break;
    
    case '-':
        cout << "Please input your values to subtract: ";
        cin >> a >> b;
        cout << "Result: " << subtract(a, b);
        break;
    
    case '*':
        cout << "Please input your values to multiply: ";
        cin >> a >> b;
        cout << "Result: " << multiply(a, b);
        break;
    
    case '/':
        cout << "Please input your values to divide: ";
        cin >> a >> b;
        cout << "Result: " << divide(a, b);
        break;
    
    default:
        break;
    }
    cout << endl;
}