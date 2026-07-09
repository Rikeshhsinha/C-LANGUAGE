#include <stdio.h>
//Add count odd elements in an array in C language
void countOdd(int num[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (num[i] % 2 != 0)
        {
            count++;
        }
    }
    printf("The number of odd elements in the array is: %d\n", count);
}
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
    countOdd(num, n);

    return 0;
}
