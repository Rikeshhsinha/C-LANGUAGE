//what is pointer ??
//A variable that stores the memory  address of another variable.

//   if age = 22 : stored in 2010 
//   then the ptr is : 2010 stored in 2013:

#include <stdio.h>

int main() {
    int age = 22;
    int *ptr = &age;

    int value = *ptr;   // Dereferencing

    printf("Age = %d\n", age);
    printf("Value = %d\n", value);

    return 0;
}


//   What is pointer to pointer ??
//   A pointer that stores the address of another pointer variable.
//   if age = 22 : stored in 2010
//   then the ptr is : 2010 stored in 2013:     
//   then the ptr to ptr is : 2013 stored in 2016:
