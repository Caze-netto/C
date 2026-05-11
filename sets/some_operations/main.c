#include<stdio.h>
#include<stdlib.h>
#include "./sets_operation.h"


int main(){

    int A[] = {1,2,3,4,5,6}; 
    int B[] = {1,2,3,4,5,6,7,8,9,10};
    
    int resultIN;
    
    int *arr = intersect(A, 6, B, 10, &resultIN);

    for(int i = 0; i < resultIN; i++){
        printf("{%d}", arr[i]);
    }

    free(arr);
}