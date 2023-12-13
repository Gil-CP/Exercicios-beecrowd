#include <stdio.h>

int main()
{
    int valorEntrada, horas, minutos, segundos;

    scanf("%d", &valorEntrada);

    minutos = (valorEntrada % 3600) / 60;
    horas = valorEntrada / 3600;
    segundos = (valorEntrada % 60) % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);
}