#include <stdio.h>

int main()
{
    int r1, r2, qtd;
    scanf("%d", &qtd);
    int resultados[qtd];

    for(int i = 0; i < qtd; i++)
    {
        scanf("%d %d", &r1, &r2);
        resultados[i] = r1 + r2;
    }

    for(int j = 0; j < qtd; j++)
    {
        printf("%d\n", resultados[j]);
    }
}