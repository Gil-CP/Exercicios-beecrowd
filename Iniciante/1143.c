/*Imprime sequencia conforme exemplo: 	
1 1 1
2 4 8
3 9 27
4 16 64
5 25 125 */
#include <stdio.h>
#include <math.h>

int main()
{
    int qtdLinhas;
    //Lê a quantidade de linhas a serem exibidas
    scanf("%d", &qtdLinhas);

    //Imprime conforme o exemplo
    for(int i = 1; i <= qtdLinhas; i++)
    {
        for(int j = 1; j <= 3; j++)
        {
            if(j == 1)
                printf("%d", i);
            else
            {
                int n = pow(i, j); 
                printf(" %d", n);
            } 
        }
        printf("\n");
    }
}