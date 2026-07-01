#include <stdio.h>
// This program prints numbers from 1 to n, where n is provided by the user.
int main()
{
    int n;
    printf("Enter the number upto which you want to print :");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {

        printf("%d\n", i);
    }

    return 0;
}