#include <stdio.h>
#include <stdlib.h>

int main(){

    int rows = 3;
    int col = 3; 

    int** arr = malloc(rows * sizeof(int*));

    for(int i = 0; i < rows; i++){
        arr[i] = malloc(col * sizeof(int));
    }

    for(int x = 0; x < rows; x++){
        for(int y = 0; y < col; y++){
            arr[x][y] = 1;
        }
    }

    for(int x = 0; x < rows; x++){
        for(int y = 0; y < col; y++){
            printf("%d ", arr[x][y]);
        }
        printf("\n");
    }

    for(int i = 0; i < rows; i++){
        free(arr[i]);
    }
    free(arr);

    return 0;
}