#include <stdio.h>
#include "./subsets.h"

int main(){
    int a[] = {1,2,3,4,5};
    int b[] = {1,2,3,4,5,};

    int a_size = sizeof(a) / sizeof(a[0]);
    int b_size = sizeof(b) / sizeof(b[0]);

    int result = is_subset(a, a_size, b,  b_size);

    int resultP = is_proper_subset(a, a_size, b,  b_size);


    printf("Its subset: %d\n", result);
    printf("Its proper subset: %d\n", resultP);
}