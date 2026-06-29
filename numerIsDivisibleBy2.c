#include<stdio.h>

//Number is divisible by 2 or not

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is divisible by 2.\n", number);
    } else {
        printf("%d is not divisible by 2.\n", number);
    }

    return 0;
}