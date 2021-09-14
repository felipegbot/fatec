#include <stdio.h>

void LacoFor(){
    int num1, num2, num3, num4, i;

    printf("Insira o primeiro número inteiro: ");
    scanf("%d",&num1);
    printf("Insira o segundo número inteiro: ");
    scanf("%d",&num2);
    printf("Insira o terceiro número inteiro: ");
    scanf("%d",&num3);
    printf("Insira o quarto número inteiro: ");
    scanf("%d",&num4);

    for (i = 0; i < 10; i++)
    {
    printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", i, num1, num1 * i, i, num2, num2 * i );
    }
    printf("-----------------------------\n");
    for (i = 0; i < 10; i++)
    {
    printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", i, num3, num3 * i, i, num4, num4 * i );
    }
    
}

void LacoWhile(){
    int num1, num2, num3, num4, i=1;

    printf("Insira o primeiro número inteiro: ");
    scanf("%d",&num1);
    printf("Insira o segundo número inteiro: ");
    scanf("%d",&num2);
    printf("Insira o terceiro número inteiro: ");
    scanf("%d",&num3);
    printf("Insira o quarto número inteiro: ");
    scanf("%d",&num4);

    while(i<11){
        printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", i, num1, num1 * i, i, num2, num2 * i );
        i++;
    }

    i = 1;
    printf("-----------------------------\n");

    while(i<11){
        printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", i, num3, num3 * i, i, num4, num4 * i );
        i++;
    }
}

void LacoDoWhile(){
    int num1, num2, num3, num4, i=1;

    printf("Insira o primeiro número inteiro: ");
    scanf("%d",&num1);
    printf("Insira o segundo número inteiro: ");
    scanf("%d",&num2);
    printf("Insira o terceiro número inteiro: ");
    scanf("%d",&num3);
    printf("Insira o quarto número inteiro: ");
    scanf("%d",&num4);

    do{
        printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", i, num1, num1 * i, i, num2, num2 * i );
        i++;
    }while(i<11);
    i = 1;
    printf("-----------------------------\n");

    do{
        printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", i, num3, num3 * i, i, num4, num4 * i );
        i++;
    }while(i<11);
}



int main(){ // Chamar as funções separadas para testar cada laço, a princípio estão todas sendo chamadas
    LacoFor();
    LacoWhile();
    LacoDoWhile();
}