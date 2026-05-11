#include <stdio.h>
#include <stdlib.h>

int* intersect(int *set1, int size1, int *set2, int size2, int *resultSize){

    int *arr = malloc(sizeof(int));

    int k = 0;

    for(int i = 0; i < size1; i++){

        int exists = 0;

        for(int x = 0; x < k; x++){
            if(arr[x] == set1[i]){
                exists = 1;
                break;
            }
        }

        if(exists) continue;

        for(int j = 0; j < size2; j++){

            if(set1[i] == set2[j]){

                arr = realloc(arr, (k + 1) * sizeof(int));

                arr[k] = set1[i];

                k++;

                break;
            }
        }
    }

    *resultSize = k;

    return arr;
}