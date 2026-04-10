#include <stdio.h>
#include "major.h"


int main(){
    int arr[5] = {1,2,10,4,5};

    int maior = major(arr, 5);

    printf("O maior numero eh: %d\n", maior);

}