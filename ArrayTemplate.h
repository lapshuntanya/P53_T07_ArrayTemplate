#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace  std;


//Заповнити масив випадковими числами від 1 до 10
template <typename Type>
void randArray(Type arr[], int size, int a = 1, int b = 10) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (b - a + 1) + a;
    }
}


//Виведення масиву на екран
template <typename T>
void printArray(T arr[], int size, int c_width = 5) {
    for (int i = 0; i < size; i++) {
        cout.width(c_width);
        cout << arr[i];
    }
    cout << endl;
}

