#include <stdio.h>
#include <stdlib.h> 

int main(){

    int  x[] = {1,2,3,4,5,6,7,8,9,10};
    int y[10];

    int a;
    int b;

    printf("Um valor para o coeficiente angular: ");
    scanf("%d", &a);

    printf("Um valor para o coeficiente linear: ");
    scanf("%d", &b);

    if(a < 0){
        printf("Eh uma funcao descrecente\n");
    }else if (a == 0)
    {
        printf("Eh uma funcao constante\n");
    }else{
        printf("Eh uma funcao crescente\n");
    }

    int size = sizeof(x) / sizeof(x[0]);

    for(int i = 0; i < size; i++){
        y[i] = (a * x[i]) + b;
    }

    for(int j = 0; j < size; j++){
        printf("Dominio de %d gera imagem %d\n", x[j], y[j]);
    }

    return 0;
}