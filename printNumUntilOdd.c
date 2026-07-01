#include <stdio.h>

int main()
{

    int n;
   
    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);

        printf("%d\n", n);

    } while (n % 2 == 0);

    printf("Thank you !!");
    
    return 0;
}