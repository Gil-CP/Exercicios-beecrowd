#include <stdio.h>

int main()
{
    int vetor[10], valor;
    
    //Lê o valor a ser adicionado ao vetor
    scanf("%d", &valor);

    //Preenche o vetor
    for(int i = 0; i < 10; i++)
    {
        //Adiciona o valor lido na primeira posição do vetor
        if(i == 0)
            vetor[0] = valor;
        else
        {
            //Adiciona ao vetor o dobro do valor salvo na posição anterior
            vetor[i] = vetor[i-1] * 2;
        }
    }

    //Imprime o vetor
    for(int i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i, vetor[i]);
    }
}