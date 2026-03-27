#include "ArrayTemplate.h"

int main() {

    int a[5] = {4, 2, 7, 2, -7};
    printArray(a, 5);

    int b[20] = {0};
    randArray(b, 20, -50, 50);
    printArray(b, 20);

    float f[3]= {3.6, 2.8, 6.12};
    printArray(f, 3);


    return 0;
}