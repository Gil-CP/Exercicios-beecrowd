#include <stdio.h>

int main()
{
    int opcao = 0, gasolina = 0, diesel = 0, alcool = 0;

    while(opcao != 4)
    {
        scanf("%d", &opcao);
        switch(opcao)
        {
            case 1:
                alcool++;
                break;
            case 2:
                gasolina++;
                break;
            case 3:
                diesel++;
                break;
            default:
                continue;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);

    return 0;
}