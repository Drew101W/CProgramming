#include <stdio.h>

void printTriangleTopLeft(int size);
void printTriangleBottomLeft(int size);
void printTriangleTopLeftNumbers(int size);
int main(void) {
    int n = 0;
    // Scan a positive integer
    do {
        printf("Enter an integer: ");
        scanf("%d", &n);

    }while (n <= 0);

    //printTriangleTopLeft(n);
    printf("\n");
    //printTriangleBottomLeft(n);
    printTriangleTopLeftNumbers(n);
    return 0;

}


 /*
    5
    *****
    ****
    ***
    **
    *
 */
void printTriangleTopLeft(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i; j++ ){
            printf("%c", '*');
        }
        puts(""); // new line after we printed one line
    }

}
void printTriangleBottomLeft(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i + 1; j++ ){
            printf("%c", '*');
        }
        puts(""); // new line after we printed one line
    }

}

void printTriangleTopLeftNumbers(int size){
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i; j++ ){
            printf("%d", i);
        }
        puts(""); // new line after we printed one line
    }
}