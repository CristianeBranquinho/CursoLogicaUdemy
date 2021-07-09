#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, soma;
    soma = 0;

    printf("Digite o valor de X:\n");
    scanf("%d", &x);
    printf("Digite o valor de Y:\n");
    scanf("%d", &y);

    soma = x + y;
    printf("SOMA = %d", soma);
    return 0;
}
