#include<stdio.h>
int testPtrAndArray()
{
    int x[3] = {5, 10, 15};        // Declare an array
    int *ptr, *ptr1, *ptr2, *ptr3; // Declare pointer variable
    ptr1 = &x[0];
    ptr2 = &x[1];
    ptr3 = &x[2];
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", x[i]);
    }

        // Assign address of x [0] to ptr
        ptr = x; // We can use ptr=&x[0];(both are same)

    printf("Address of x = %d\n", &x); // Address of x = 6422244;
    printf("Address of ptr = %d\n", &ptr);//Address of ptr = 6422240
    printf("Elements of the array are:");
    printf("%d,%d,%d", ptr[0], ptr[1], ptr[2]); // Elements of the array are:5; 10
    return 0;
}