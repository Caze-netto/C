#include <stdio.h>
#include <stdlib.h>

int main(){

    int* a = (int*) malloc(sizeof(int));
    *a = 65;

    printf("Here is the address of the pointer: %p\n", &a);
    printf("Here is the address the pointer is storing: %p\n", a);
    printf("Here is the value at the address the pointer stores: %d\n", *a);
    printf("Here is the value at the address in ASCII because its cool: %c", *a);

    free(a);
}