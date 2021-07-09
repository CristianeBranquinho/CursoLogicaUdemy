#include <stdio.h>
#include <stdlib.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{
    int idade1, idade2;
    double media;
    char nome1[50], nome2[50];

    printf("Dados da primeira pessoa: \n");
    printf("NOME: ");
    ler_texto(nome1, 50);
    printf("IDADE: ");
    scanf("%d", &idade1);

    printf("Dados da segunda pessoa: \n");
    printf("NOME: ");
    limpar_entrada();
    ler_texto(nome2, 50);
    printf("IDADE: ");
    scanf("%d", &idade2);

    media = (double) (idade1 + idade2)/2;

    printf("A idade media da %s e %s e de %.1lf anos", nome1,nome2,media);

    return 0;

}
