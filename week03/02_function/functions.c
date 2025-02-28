/*

    Working with functions.

    Format of a function

    <return type> <function_name>(<function argument(s)>){
        code of the function
    }

*/

#include <stdio.h>
// The function that doesn't return the value and doesn't take any inputs
// Function definition
void print_course(void) {
    printf("You are in COP%d course\n", 2271);    
}

void draw_circle(void) {
    puts("    *");
    puts("  *   *");
    puts("   * *");

}

void draw_line(void) {

    puts("--------");
}

void draw_intersection(void) {

    puts("   /\\ ");
    puts("  /  \\ ");
    puts(" /    \\ ");
    puts("/      \\ ");
}

void draw_triangle(void) {

    draw_intersection();
    draw_line();
}

void draw_stick_figure(void) {
    print_course();
    draw_circle();
    draw_triangle();
    draw_intersection();

}

int main () {
    // Function call
    draw_stick_figure();

    return 0;
}