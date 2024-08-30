#include <stdio.h>
int testPointer()
{
    int var = 10; // declare normal variable
    int *ptr;//declare pointer variable
    ptr = &var;//Data type of ptr and var
    //Assign the address of a variable to a pointer
    printf("Value address at var = %p\n", ptr); // Value address at var = 0061FEE8
    printf("Value address at ptr = %p\n", ptr); // Value address at ptr = 0061FEE8
    printf("Value at var = %d\n", var);         // Value at var = 10
    printf("Value at pointer = %d\n", *ptr);    //Value at pointer = 10
}