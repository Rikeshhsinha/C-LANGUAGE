#include <stdio.h>

// Write a program to check if a student has passed or failed.
int main()
{

    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks > 30)
    {
        printf("You have passed the exam.\n");
    }
    else
    {
        printf("You have failed the exam.\n");
    }

    return 0;
}