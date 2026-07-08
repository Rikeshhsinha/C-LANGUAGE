#include <stdio.h>

void printHelloWorld(int n)
{
    if (n <= 0)
        return;
    printf("Hello, World!\n");
    printHelloWorld(n - 1);
}

int main()
{
    int n;
    printf("Enter the number of times to print 'Hello, World!': ");
    scanf("%d", &n);
    printHelloWorld(n);

    return 0;
}