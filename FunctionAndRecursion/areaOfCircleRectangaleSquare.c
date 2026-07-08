#include <stdio.h>

// Function to calculate the area of a square, rectangle, and circle

int square(int num)
{
    return num * num;
}

int rectangleArea(int length, int width)
{
    return length * width;
}

float circleArea(float radius)
{
    const float PI = 3.14159;
    return PI * radius * radius;
}

int main()
{
    int choice;
    printf("Choose the number to calculate area:\n");
    printf("1. Square\n");
    printf("2. Rectangle\n");
    printf("3. Circle\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        int num;
        printf("Enter the side length of the square: ");
        scanf("%d", &num);
        int area = square(num);
        printf("The area of the square is: %d\n", area);
        break;
    }
    case 2:
    {
        int num1, num2;
        printf("Enter the length and width of the rectangle: ");
        scanf("%d %d", &num1, &num2);
        int area = rectangleArea(num1, num2);
        printf("The area of the rectangle is: %d\n", area);
        break;
    }
    case 3:
    {
        float radius;
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        float area = circleArea(radius);
        printf("The area of the circle is: %.2f\n", area);
        break;
    }
    default:
        printf("Invalid choice!\n");
    }

    return 0;
}