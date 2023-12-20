#include <stdio.h>
#define CONSUMO 12.0

int main()
{
    int horas, vmedia;
    double litros;

    scanf("%d", &horas);
    scanf("%d", &vmedia);

    litros = (horas * vmedia) / CONSUMO;

    printf("%.3lf\n", litros);
}