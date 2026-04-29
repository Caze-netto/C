#include <stdio.h>

int main(){

    int n[] = {1,2,3,4,5,8,6};
    
    printf("Address: %p\n", (void*)n);   
    
    int *s = n + 1;

    printf("Address of the second element: %p\n", (void*)s);

    printf("Value stored at the address of the second element: %d\n", *s);

    return 0;
}