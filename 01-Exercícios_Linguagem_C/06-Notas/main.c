#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, soma = 0;

    //informe nota 1 e nota 2
    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    //soma as duas notas e exiba o resultado
    soma = nota1 + nota2;
    printf("NOTA FINAL = %.1lf\n",soma);

    //caso a soma seja menor que 60.0 informe que está reprovado.
    if (soma < 60.0) {
        printf("REPROVADO");
    }

    return 0;
}
