#include<stdio.h>
#include<stdlib.h>
#include "./sets_operation.h"


int main(){

    int A[] = {1,2,3,4,5,6,10,10}; 
    int B[] = {1,2,3,4,5,6,7,8,9,10,10,12,13};


    int resultIN;

    int *arrIN = intersect(A, 8, B, 13, &resultIN);

    printf("{");
    for(int i = 0; i < resultIN; i++){
        printf("%d", arrIN[i]);
    } printf("}");


    printf("\n");

    free(arrIN);
    
    int resultOFF;

    int *arrOF = diff(A, 8, B, 13, &resultOFF);

    printf("{");
    for(int i = 0; i < resultOFF; i++){
        printf("%d", arrOF[i]);
    }printf("}");

    free(arrOF);
}