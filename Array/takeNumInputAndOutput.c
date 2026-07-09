#include <stdio.h>
//Add take input and print output of an array in C language
int main()
{

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int num[n];

    for (int i = 0; i < n; i++)
    {

        printf("Enter element %d: ", i);
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < n; i++)
    {

        printf("The element at index %d is: %d\n", i, num[i]);
    }

    return 0;
}
