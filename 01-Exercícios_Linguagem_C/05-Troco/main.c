#include <stdio.h>
#include <stdlib.h>

int main()
{
    double precoUnitario, dinheiroRecebido, troco = 0;
    int qtdCompra = 0;

    printf("Preco unitario do produto: ");
    scanf("%lf", &precoUnitario);

    printf("Quantidade comprada: ");
    scanf("%d", &qtdCompra);

    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiroRecebido);

    troco = dinheiroRecebido -(precoUnitario * qtdCompra);
    printf("TROCO = %.2lf", troco);

    return 0;
}
