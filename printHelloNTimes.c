#include <stdio.h>

// This program prints "Hello World !!" n times, where n is provided by the user.

int main()
{

    int n;

    printf("Enterthe number want to pritn hello world !! :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Hello World !!\n");
    }

    return 0;
}