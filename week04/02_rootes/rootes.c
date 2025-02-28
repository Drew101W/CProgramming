/*

    The program computes the rootes of quadtratic equation.
*/

#include <stdio.h>
#include <math.h>

// Fuction prototypes
// char stores a character
void printPrompt(char c);
int getCoefficient(void);
int countDiscriminant(int a, int b, int c);
void printRootes(int a, int b, int c);

int main(void) {
    printPrompt('a');
    int a = getCoefficient();
    printPrompt('b');
    int b = getCoefficient();
    printPrompt('c');
    int c = getCoefficient();

    printRootes(a, b, c);

    return 0;
}

/*****************/
void printPrompt(char ch) {
    printf("Enter the coefficient %c: ", ch);
}
/*****************/

int getCoefficient(void) {
    int coef = 0;
    scanf("%d", &coef);

    return coef;
}
/*****************/

int countDiscriminant(int a, int b, int c) {
    return (b * b) - (4 * a * c);
} 
/*****************/

void printRootes(int a, int b, int c) {
    // Calcualte discriminant
    int discrim = countDiscriminant(a, b, c);
    if (discrim < 0) {
        puts("No real rootes");
    }
    if (discrim == 0) {
        int x = -b / (2 *a);
        printf("x = %d\n", x);
    }
    if (discrim > 0) {
        double x1 = (-b + sqrt(discrim)) / (2 * a);
        double x2 = (-b - sqrt(discrim)) / (2 * a);

        printf("x1 = %f, x2 = %f\n", x1, x2);
    }
    
}
