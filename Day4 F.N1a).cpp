#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 5, b= 10;

    printf("Before swapping: a= %d, b= %d\n", a, b);

    swapByValue(a, b);

    printf("After swapping (Call By Value): a= %d, b= %d\n", a, b);

    return 0;
}

