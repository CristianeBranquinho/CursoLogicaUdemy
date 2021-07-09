#include <stdio.h>
#include <string.h>

int main(){

    double largura;
    double comprimento;
    double valorMetroQuadrado;
    double area, preco;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valorMetroQuadrado);

    area =  largura * comprimento;
    preco = area * valorMetroQuadrado;

    printf("Area do terreno = %.2lf\n", area);
    printf("Preco do terreno = %.2lf\n", preco);


    return 0;
}
