#include <stdio.h>

int main(){


    //movimento da torre
    printf("*** Movimento da torre ***\n");
    int i = 1;
    while (i <= 5)
    {
        printf("Direita\n");
        i++;
    }

    //movimento do bispo
    printf("*** Movimento do bispo ***\n");
    int b = 1;
    do
    {
        printf("Cima\n");
        printf("Direita\n");
        b++;
    } while (b <= 5);

    //Movimento da raínha
    printf("*** Movimento da raínha ***\n");
    for (i = 1; i <= 8; i++)
    {
        printf("Esquerda\n");
    }
    return 0;
}