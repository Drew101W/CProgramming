/*
    Practice with non-void functions
*/

#include <stdio.h>

// Function prototypes
// The function named getFive returns an integer and takes no arguments
int getFive(void);

// Function prints the given value
// The function named printCourse returns nothing and takes
// one integer argument

void printCourse(int course_number);

// Function that describes weather
void describeWeather(int temp);

// Functions returns kilometers for the given miles
double milesToKms(int miles);

int main(void) {
    int var;
    // Call a function
    var = getFive();

    printf("The value of var is %d\n", var);

    printCourse(2271);

    // Test describeWeather
    int temp = 0;
    printf("Enter a temperature: ");
    scanf("%d", &temp);
    describeWeather(temp);

    int miles = 0;
    printf("Enter number of miles: ");
    scanf("%d", &miles);
    milesToKms(miles);

    return 0;
}
////////////////////////////////////////////////////////
// Function definition
int getFive(void) {
    int five = 5;

    return five;
}
/////////////////////////////////////////////////////////
void printCourse(int course_number) {
    printf("You are in COP%d course\n", course_number);
}
/////////////////////////////////////////////////////////
void describeWeather(int temp) {
    if (temp > 70) {
        printf("The temperature is %d and it is HOT\n", temp);
    }
    if (temp <= 70) {
        printf("The temperature is %d and it is COLD\n", temp);
    }
}
 double milesToKms( int miles) {
    double kms = miles * 1.609;
    printf("%d miles is %f kms\n", miles, kms);

 }