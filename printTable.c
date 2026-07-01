#include <stdio.h>
// This program prints the multiplication table of a number provided by the user.
int main()
{

    int n;
    printf("Enter the number you want to print the table for :");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {

        printf("%d x %d =%d\n", n, i, n * i);
    }

    return 0;
}