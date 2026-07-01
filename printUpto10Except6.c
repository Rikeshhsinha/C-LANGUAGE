#include <stdio.h>
// This program prints numbers from 1 to 10 except for the number 6.
int main()
{

    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}