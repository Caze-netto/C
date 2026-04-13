#include <stdio.h>
#include "calculator.h"

int main(){
    char operator = '-';

    int a = 10, b = 10;

    switch(operator){
        case '+':
            printf("Sum: %d\n", plus(a, b));   
            break;
        case '-':
            printf("Sub: %d\n", minus(a,b));
            break;
        case '*':
            printf("Mult: %d\n", versus(a,b));
            break;
        case '/':
            printf("Div: %d\n", divided(a,b));
            break;
    };

    return 0;
}