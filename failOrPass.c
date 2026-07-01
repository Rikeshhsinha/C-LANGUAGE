#include <stdio.h>

// Write a program to check if a student has passed or failed.
int main()
{

    int marks;

    printf("Enter your marks(1-100): ");
    scanf("%d", &marks);

    if (marks > 30 && marks <= 100)
    {
        printf("You have passed the exam.\n");
    }
    else if (marks >= 1 && marks < 30)
    {
        printf("You have failed the exam.\n");
    }
    else
    {
        printf("Invalid marks entered.\n");
    }

    return 0;
}