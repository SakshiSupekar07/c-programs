#include <stdio.h>

int main() {
    // a. Declare a pointer of type integer and assign NULL to it
    int *ptr = NULL;

    // b. Assign the address of an integer variable to the pointer variable
    int intVar = 5;
    ptr = &intVar;

    // c. Print the value and address of this pointer
    printf("The value of ptr (address of intVar): %p\n", (void*)ptr);
    printf("The address of ptr itself: %p\n", (void*)&ptr);
    printf("The value stored at ptr (value of intVar): %d\n", *ptr);

    // d. Assign the value 10 to the pointer variable (dereference and change the value)
    *ptr = 10;

    // e. Print the value of the pointer variable (it should now hold the value 10 at the location it points to)
    printf("The new value stored at ptr (value of intVar): %d\n", *ptr);

    // f. Print the value stored at the address where the pointer variable is pointing to
    printf("The value stored at the address where ptr is pointing: %d\n", *ptr);

    return 0;
}
