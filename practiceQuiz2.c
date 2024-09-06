/* practiceQuiz2.c
 * ===========================================================
 * Name: Matthew Adsit 
 * Section:T3B
 * Project: Lab 3 - Practice Quiz (0 Points)
 * Purpose: Practice how to use printf and scanf
 */

// YOUR CODE GOES HERE
#include <stdio.h>

int main() {
    int userYear = 0;
    int userAge = 0;
    printf("Enter the current year and your age: ");
    scanf("%d %d", &userYear, &userAge);
    printf("You will graduate USAFA in %d, and you will be %d years old\n", userYear+3, userAge+3);
    return 0;
}