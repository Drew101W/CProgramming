#include <stdio.h>

int main(void) {
    char input;
    int number;
    char symbol;
    // Get an uppercase character
    do {
        printf("Enter an uppercase character:");
        scanf(" %c", &input);
    } while (input < 'A' || input > 'Z');

    // Get a positive integer
    do {
        printf("Enter a postitive integer: ");
        scanf(" %d", &number);
    } while (number <= 0);

    // Print <number> of <inputs> in one line. Use for loop
    // A
    // 3
    // AAA
    for(int i = 1; i <= number; i++) {
        printf("%c", input);
    }
    do {
        printf("Enter an symbol * or # ");
        scanf(" %c", &symbol);
    } while (symbol != '*' || symbol != '#');

    for()
    return 0;
}