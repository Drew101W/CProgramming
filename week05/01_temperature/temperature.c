#include <stdio.h>

/*
    Function tht prints a description of a temperature


*/

// Prototype
void temperatureDescription(double temp);

// Checks whether the given number in a rang [0; 10]
void checkRange(int number);
// Largest
int largest(int num1, int num2, int num3) {


    if(num1 >= num2 && num1 >= num2){
        return num1;
    }
    else if(num2 >= num1 && num2 >= num3){
        return num2;
    }
    else {
        return num3;
    }


}
// main

int main(void) {
    double temp = 0;
    printf("Enter your temperature: ");
    scanf("%lf", &temp);
    temperatureDescription(temp);
    
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    printf("Enter 3 numbers:");
    scanf("%d, %d, %d", &num1, &num2, &num3);
    largest(int num1, int num2, int num3);
    return 0;
}

void temperatureDescription(double temp) {
    if (temp > 101) {
        puts("High Fever") ;
    }
    else if (temp > 99) {
        puts("Low Fever");
    }
    else if (temp > 97) {
        puts("Normal");
    }
    else {
        puts("Low Temperature");
    }
}

void checkRange(int number) {
    if (number >= 0 && number <= 10) {
        puts("YES");
    }
    else {
        puts("NO");
    }
}