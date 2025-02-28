#include <stdio.h>

// Function protoypes

void one_three(void);


void two() {
    puts("two");
}

void one_three() {

    puts("one");
    two();
    puts("three");
}

int main() {
    
    puts("starting now:");
    one_three();
    puts("done!");

    return 0;
}
