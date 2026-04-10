#include <stdio.h>
#include <limits.h> 
#include "major.h"

int major(int *arr, int tam){
    int max = INT_MIN;

    for(int i = 0; i < tam; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}