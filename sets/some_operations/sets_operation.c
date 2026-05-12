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


int* diff(int *set1, int size1, int *set2, int size2, int *resultSize){

    int major = size1;
    int minor = size2;

    int *major_arr = set1;
    int *minor_arr = set2;

    if(size1 < size2){
        major = size2;
        major_arr = set2;
        minor_arr = set1;
        minor = size1;
    }

    int *arr = malloc(sizeof(int));

    int k = 0;

    for(int i = 0; i < major; i++){

        int exists = 0;
        int equal = 0;

        for(int x = 0; x < k; x++){

            if(arr[x] == major_arr[i]){
                exists = 1;
                break;
            }
        }

        if(exists) continue;

        for(int j = 0; j < minor; j++){

            if(major_arr[i] == minor_arr[j]){
                equal = 1;
                break;
            }
        }

        if(equal) continue;

        arr = realloc(arr, (k + 1) * sizeof(int));

        arr[k] = major_arr[i];

        k++;
    }

    *resultSize = k;

    return arr;
}