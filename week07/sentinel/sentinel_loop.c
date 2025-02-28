#include <stdio.h>

// TODO no negative numbers should be accepted (except -1)
double avgStudentGradesSentinel(void);

double getGrade(void);

int main(void) {
    printf("%.2lf\n", avgStudentGradesSentinel());

    return 0;
}

double avgStudentGradesSentinel(void) {
    double grade = 0; // The current student grade
    double total_grade = 0;
    int n_grades = 0;
    while (grade != -1) { // -1 - the sentinel value
        // Get the grade
        grade = getGrade();

        // Ignore -1 for the total grade calculation
        if (grade >= 0) {
            total_grade += grade;
            n_grades++;
        }
        else if (grade < -1) {
            printf("Program cannot accept negative numbers");
        }
        n_grades++;
        // Add the scanned grade to the total grade
        total_grade += grade;

    }
     if (n_grades == 0) {
        puts("No grades were entered!");
        return 0;
     }



    return total_grade / n_grades;
}

double getGrade(void) {
    // DO NOT return grades <-1 or greater than 100

    double grade;
    do {
        printf("Enter a grade (-1 to exit): ");
        scanf("%lf", &grade);
        if (grade <-1 || grade > 100){
            puts("The grade should be in the interval [-1; 100]");
        }
    } while(grade <-1 || grade > 100);



    return grade;
}