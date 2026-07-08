#include <stdio.h>
// Add Factorial of n natural number using recursion.
int factOfNum(int n)
{

    if (n < 1)
    {
        return 1;
    }

    return n * factOfNum(n - 1);
}
int main()
{
    int n;
    printf("Enter the number to calculate factorial :");
    scanf("%d", &n);

    int fact = factOfNum(n);
    printf("The factorial of %d is : %d", n, fact);

    return 0;
}