// arrayInOut.cpp
#include <iostream>
#include "arrayInOut.h"

using namespace std;

void arrayInOut() {
    int count = 2;
    int a[count];

    cout << "Please enter two numbers: ";
    //cin >> a[0] >> a[1];
    for (int i = 0; i < count ; i++){
        cin >> a[i];
    }

    //cout << a[0] << " + "<< a[1] << endl;
    cout << "Output: ";
    for (int i = 0; i < count ; i++){
        cout << a[i] << " ";
    }
    cout << endl;

}

