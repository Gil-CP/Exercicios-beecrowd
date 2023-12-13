#include <stdio.h>
#define CACHORROQUENTE 4.0
#define XSALADA 4.5
#define XBACON 5.0
#define TORRADA 2.0
#define REFRIGERANTE 1.5

int main()
{
    int codigo, qtd;
    scanf("%d %d", &codigo, &qtd);

    switch(codigo)
    {
        case 1:
            printf("Total: R$ %.2lf\n", CACHORROQUENTE * qtd);
            break;
        case 2:
            printf("Total: R$ %.2lf\n", XSALADA * qtd);
            break;
        case 3:
            printf("Total: R$ %.2lf\n", XBACON * qtd);
            break;
        case 4:
            printf("Total: R$ %.2lf\n", TORRADA * qtd);
            break;
        case 5:
            printf("Total: R$ %.2lf\n", REFRIGERANTE * qtd);
            break;    
    }
}