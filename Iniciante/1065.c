    #include <stdio.h>

    int main()
    {   
        int numero, pares = 0;
        for(int i = 0; i < 5; i++)
        {
            scanf("%d", &numero);
            if(numero % 2 == 0)
                pares++;
            
        }
            printf("%d valores pares\n", pares);
    }