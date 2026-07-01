#include<stdio.h>
// This program prints odd numbers from 5 to 50.
int main()
{
    for (int i = 5; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}
