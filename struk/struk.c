#include<stdio.h>
#include<stdlib.h>

int main(){

    struct{
            int a, b;
        } typedef operacao;
		
    operacao x;

    struct idade{
        int idade;  
    };

    struct idade i;

    i.idade = 21;
    
	printf("== BEM-VINDO A OPERACAO DE DOIS ALGARISMOS == \n");
	
    x.a = i.idade;

	printf("Informe o 2o algarismo:");
	scanf("%d", &x.b);
	
    int soma = x.a + x.b;
    int subtracao = x.a - x.b;
    int multiplicacao = x.a * x.b;
    int div = x.a / x.b;

    printf("O resultado da soma eh %d\n", soma);
    printf("O resultado da subtracao eh %d\n", subtracao);
    printf("O resultado da multiplicacao eh %d\n", multiplicacao);
    printf("O resultado da divisao eh %d\n", div);

    return 0;
}