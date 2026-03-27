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



//знаходження індексу максимального елемента масиву
template <typename T>
int indexMaxElement(T arr[], int size)
{
    T max = arr[0];
    int index = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;

        }

    }
    return index;

}


template <typename T>
T sumArray(T arr[], int size)
{
    T sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}


template <typename T>
int search(T arr[], int size, T value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}


//знаходження індексу мінімального елемента масиву
template <typename T>
int indexMinElement(T arr[], int size)
{
    T min = arr[0];
    int index = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
            index = i;
        }
    }
    return index;
}