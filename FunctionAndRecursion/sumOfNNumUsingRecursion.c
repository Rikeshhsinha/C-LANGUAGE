#include <stdio.h>
// Add Sum of n natural number using recursion.
int sumOfNum(int n)
{

    if (n < 1)
    {
        return 0;
    }

    return n + sumOfNum(n - 1);
}

int main()
{

    int num;
    printf("Enter num upto add num :");
    scanf("%d", &num);

    int sum = sumOfNum(num);

    printf("The sum upto %d natural num is : %d", num, sum);

    return 0;
}