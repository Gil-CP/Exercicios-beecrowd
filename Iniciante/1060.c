#include <stdio.h>

int main()
{
    int positivos = 0, valorEntrada;

    for(int i = 0; i < 6; i++)
    {
        scanf("%d", &valorEntrada);
        
        if(valorEntrada == 0)
            --i;
        else if(valorEntrada > 0)
            positivos++;
    }
    printf("%d valores positivos\n", positivos);
}