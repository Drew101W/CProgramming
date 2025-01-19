
#include <stdio.h>

int main() {

    int age = 0;


    puts("Enter your age in years: ");

    scanf("%d", &age);
    int age_in_minutes = age * 525960;
    printf("%d years is %d minutes\n", age, age_in_minutes);

    return 0;



}