#include <stdio.h>
// Add take input price of an item and print output of the total cost with GST in C language
int main()
{

    int n;
    printf("Enter the number of items: ");
    scanf("%d", &n);
    int num[n];

    for (int i = 0; i < n; i++)
    {

        printf("Enter the price of item %d: ", i);
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < n; i++)
    {

        printf("The price of item %d is: %d\n", i, num[i]);
        printf("The total cost with GST is: %.2f\n", num[i] * 1.18);
    }

    return 0;
}
