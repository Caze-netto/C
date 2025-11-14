#include <stdio.h>
#include "binarySearch.h"

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int index = binary_search(arr, size, target);

    if (index != -1) {
        printf("Elemento %d encontrado no índice %d.\n", target, index);
    } else {
        printf("Elemento %d não encontrado.\n", target);
    }

    return 0;
}