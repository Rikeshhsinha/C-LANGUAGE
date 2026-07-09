#include <stdio.h>
// Add reverse an array in C language
void reverseArray(int *num, int n)
{
    int st = 0;
    int end = n - 1;

    while (st < end)
    {

        num[st] = num[st] + num[end];
        num[end] = num[st] - num[end];
        num[st] = num[st] - num[end];
        st++;
        end--;
    }
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

    reverseArray(num, n);

    printf("Reversed array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}