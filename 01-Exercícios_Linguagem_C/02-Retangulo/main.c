#include <stdio.h>
#include <math.h>

int main()
{
    double base;
    double altura;
    double area;
    double perimetro;
    double diagonal;

    printf("Base do retangulo: ");
    scanf("%lf", &base);

    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2* (base + altura);
    diagonal = sqrt(pow(base, 2.0)+ pow(altura, 2.0));

    printf("\nArea= %.4lf\n ", area);
    printf("Perimetro= %.4lf\n", perimetro);
    printf("Diagonal= %.4lf\n", diagonal);


    return 0;
}
