#include "pointer_array.c"
#include <stdio.h>
int count(int counter){
    int ct = counter;
    for (int i = 0; i <= ct; i++){
        printf("=");
    }
    printf("\n");
    return 0;
}

void main(){
    int number = 30;
    printf("Pointer variable in c-programing\n");
    count(number);
    testPtrAndArray();
    // testPointer3();
    // testPointer2();
    // testAddress();
    // testPointer();
}