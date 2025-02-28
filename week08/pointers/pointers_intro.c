#include <stdio.h>

void setToZero(int *n);

double productPointers(double *p1, double *p2);



int main(void) {
    int luck = 100;
    // Access
    printf("%d\n", luck);
    // Modify
    luck += 10;

    printf("The address of luck is %p\n", &luck);

    // Pointer - is a variable that stores memory addresses

    // Create a pointer
    // <data type> *pointerName;

    // Create an integer pointer

    int *luck_ptr = &luck;

    // Access the data the pointer is pointing to
    // * - dereferencing operator

    printf("Dereference luck_ptr %d\n", *luck_ptr);

    // Modify the data through the pointer
    *luck_ptr = 500;
    printf("The value of luck is %d\n",luck);

    // Passing by-reference
    setToZero(&luck);
    printf("The value of luck after setting to zero is %d\n", luck);

    double d1 = 2.3;
    double d2 = 2.5;

    printf("%lf\n", productPointers(&d1, &d2));

    return 0;
}

void setToZero(int *n) {
    *n = 0;
}

double productPointers(double *p1, double *p2) {
    return *p1 * *p2;
}
