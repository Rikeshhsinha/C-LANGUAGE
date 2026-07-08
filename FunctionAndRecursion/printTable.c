#include <stdio.h>
// Function to print the multiplication table of a given number
int printTable(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main()
{

    int n;
    printf("Enter a number to get the table of: ");
    scanf("%d", &n);

    printTable(n);

    return 0;
}