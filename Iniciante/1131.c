#include <stdio.h>

int main()
{
    int opcao = 1, inter = 0, gremio = 0, empate = 0, grenais = 0;

    while(opcao == 1)
    {
        int i, g;
        scanf("%d %d", &i, &g);

        if(i == g)
        {
            empate =+ 1;
        }
        else if(i > g)
        {
            inter += 1;
        }
        else
        {
            gremio =+ 1;
        }

        grenais += 1;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &opcao);
    }

    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empate);
    if(inter == gremio)
    {
        printf("Nao houve vencedor\n");
    }
    else if(inter > gremio)
    {
        printf("Inter venceu mais\n");
    }
    else
    {
        printf("Gremio venceu mais\n");
    }
}