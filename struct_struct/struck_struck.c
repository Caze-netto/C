#include <stdio.h>

typedef struct Base {
    int n;
} Base;

typedef struct Double {
    Base base;
} Double;

int main() {
    Double d;

    d.base.n = 42;

    printf("%d\n", d.base.n);

    return 0;
}