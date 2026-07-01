#include <stdio.h>

// Write a Program to give grades to a student
// marks < 30 is C
// 30 <= marks < 70 is B
// 70 <= marks < 90 is A
// 90 <= marks <= 100 is A+


int main (){

    int marks;

    printf("Enter your marks(1-100): ");
    scanf("%d", &marks);

    if (marks < 30)
    {
        printf("Your grade is C.\n");
    }
    else if (marks >= 30 && marks < 70)
    {
        printf("Your grade is B.\n");
    }
    else if (marks >= 70 && marks < 90)
    {
        printf("Your grade is A.\n");
    }
    else if (marks >= 90 && marks <= 100)
    {
        printf("Your grade is A+.\n");
    }
    else
    {
        printf("Invalid marks entered.\n");
    }

    return 0;
}