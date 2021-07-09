#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y = 0;

    y = 1;

    while (x != y)
    {
        printf("Digite dois numeros:\n");
        scanf("%d\n", &x);
        scanf("%d", &y);
        if (x < y)
        {
            printf("CRESCENTE!\n");
        }
         else if (x > y)
        {
           printf("DECRESCENTE!\n");
        }
    }

    return 0;
}
