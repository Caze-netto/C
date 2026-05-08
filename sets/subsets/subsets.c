#include <stdio.h>

int is_subset(int *arr1, int size1, int *arr2, int size2){

    int isSubset = 0;

    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            if(arr1[i] == arr2[j]){
                isSubset += 1; 

                if(isSubset == size1){
                    return 1;
                }
            }
        }
    }

    return 0;
}

int is_proper_subset(int *arr1, int size1 ,int *arr2, int size2){
    if(is_subset(arr1, size1, arr2 , size2) && size1 != size2){
        return 1;
    } return 0;
}