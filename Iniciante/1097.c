#include <stdio.h>

int main()
{
    int I = 1, J = 0;

    for(int i = 0; i <5;i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(j == 0)
            {
                J = I + 6;
                printf("I=%d J=%d\n", I,J);
            }
            else
                printf("I=%d J=%d\n", I, --J);
        }
        I += 2;
    }
}