#include <stdio.h>
#include <unistd.h> // usleep function
#include <stdlib.h> // rand function


void whatIf(void);

void printHello(void);
void printNHello(int n);

int fahrenheitToCelcius(int temp);

void printTemperatures(int min, int max);

void printNRandom( int n);

int main(void) {
    // Set the seed of random numbers
    srand(2);
    //whatIf();

    //printNHello(56);

    //printTemperatures();

    printNRandom(6);

    return 0;
}

void whatIf(void) {

    int i = 10;
    if (i == 10) {
        puts("LK9LU");

    }
    else {
        puts("XL7XJ");
    }
}

void printHello(void) {
    // Use an interation statement (loop) while loop

    // We need 3 things to create a loop
    // 1 - a counter (initialization)
    // 2 - condition
    // 3 - increment (change the counter)

    int i = 1; // initialization
    while (i <= 100) { // condition
        printf("%d - HELLO!\n", i);
        usleep(30000);
        i = i + 1;

    }
}
void printNHello(int n) {
    while (n > 0) { // condition
        printf("%d - HELLO!\n", n);
        usleep(30000);
        n = n - 1;
}
}

int fahrenheitToCelcius(int temp) {
    return (temp -32) * 5 / 9;
}

void printTemperatures(int min, int max) {
    int t = min;
    while (t <= max) {
        printf("%+4d - %+d\n", t, fahrenheitToCelcius(t));
        t = t + 1;
    }
}


void printNRandom( int n) {
    int i = 1;
    while (i <= n) {
        printf("%d\n", rand());
        i = i +1;
    }
}
