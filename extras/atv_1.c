#include <stdio.h>

int main(){
    int num1, num2, num3, num4;

    printf("Insira o primeiro número inteiro: ");
    scanf("%d",&num1);
    printf("Insira o segundo número inteiro: ");
    scanf("%d",&num2);
    printf("Insira o terceiro número inteiro: ");
    scanf("%d",&num3);
    printf("Insira o quarto número inteiro: ");
    scanf("%d",&num4);

    printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", 1, num1, num1 * 1, 1, num2, num2 * 1 );
    printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", 2, num1, num1 * 2, 2, num2, num2 * 2 );
    printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", 3, num1, num1 * 3, 3, num2, num2 * 3 );
    printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", 4, num1, num1 * 4, 4, num2, num2 * 4 );
    printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", 5, num1, num1 * 5, 5, num2, num2 * 5 );
    printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", 6, num1, num1 * 6, 6, num2, num2 * 6 );
    printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", 7, num1, num1 * 7, 7, num2, num2 * 7 );
    printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", 8, num1, num1 * 8, 8, num2, num2 * 8 );
    printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", 9, num1, num1 * 9, 9, num2, num2 * 9 );
    printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", 10, num1, num1 * 10, 10, num2, num2 * 10 );
    printf("-----------------------------\n");
    printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", 1, num3, num3 * 1, 1, num4, num4 * 1 );
    printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", 2, num3, num3 * 2, 2, num4, num4 * 2 );
    printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", 3, num3, num3 * 3, 3, num4, num4 * 3 );
    printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", 4, num3, num3 * 4, 4, num4, num4 * 4 );
    printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", 5, num3, num3 * 5, 5, num4, num4 * 5 );
    printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", 6, num3, num3 * 6, 6, num4, num4 * 6 );
    printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", 7, num3, num3 * 7, 7, num4, num4 * 7 );
    printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", 8, num3, num3 * 8, 8, num4, num4 * 8 );
    printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", 9, num3, num3 * 9, 9, num4, num4 * 9 );
    printf(" %.2d * %d = %.3d || %.2d * %d = %.3d\n", 10, num3, num3 * 10, 10, num4, num4 * 10 );

    return 0;
}