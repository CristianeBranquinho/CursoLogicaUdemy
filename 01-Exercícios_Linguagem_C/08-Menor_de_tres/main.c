#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, menorNum = 0;

    printf("Primeiro valor: ");
    scanf("%d", &num1);
    printf("Segundo valor: ");
    scanf("%d", &num2);
    printf("Terceiro valor: ");
    scanf("%d", &num3);

    if(num1 < num2 && num1 < num3)
    {
        menorNum = num1;
    }
    else if(num2<num1 && num2 <num3)
    {
        menorNum = num2;
    }
    else
    {
        menorNum = num3;
    }
     printf("\nMENOR = %d", menorNum);

    return 0;
}
