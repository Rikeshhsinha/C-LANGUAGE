#include <stdio.h>
#include <math.h>
// Function to calculate and print the square of a number
void printSquare(int n)
{
    int square = pow(n, 2);
    printf("The square of %d is: %d\n", n, square);
}

int main()
{

    printf("Enter a number to get square: ");
    int num;
    scanf("%d", &num);

    printSquare(num);

    return 0;
}
