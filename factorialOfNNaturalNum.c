#include <stdio.h>
// This program calculates the factorial of a natural number.
int main()
{
    int n;

    printf("Enter the number want get factorial of: ");
    scanf("%d", &n);

    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("Factorial of %d is : %d ", n, factorial);

    return 0;
}