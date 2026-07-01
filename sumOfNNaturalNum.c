#include <stdio.h>
// This program finds the sum of first n natural numbers, where n is provided by the user.
int main()
{
    int n;
    printf("Enter the number upto which you want to find the sum :");
    scanf("%d", &n);

    int sum = 0;

    while (n > 0)
    {
        sum = sum + n;
        n--;
    }

    printf("The sum of first n natural numbers is: %d\n", sum);

    return 0;
}