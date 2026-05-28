#include <stdio.h>

int main(){

    int bispo, torre, rainha;
    int movimento1 = 0, movimentobispo1 = 0, movimentobispo2 = 0, movimento3 = 0;

    while (movimento1 <= 4)
    {
        printf("A torre está na casa %d, ela se move para direita.\n", movimento1);
        movimento1++;
    }
    printf("O bispo termina na casa %d, onde ele para.\n", movimento1);

    // parte do bispo

    do
    {
        printf("O bispo está na casa %d para cima e %d para direita, ele se move uma vez para cima e uma para direita.\n", movimentobispo1, movimentobispo2);
        movimentobispo1++;
        movimentobispo2++;
    } while (movimentobispo1 <= 4 && movimentobispo2 <= 4);
    
    printf("O bispo está na casa %d para cima e %d para direita, onde ele para.\n", movimentobispo1, movimentobispo2);

    //parte da rainha

    for (movimento3 = 0; movimento3 <= 7; movimento3++)
    {
        printf("A rainha está na casa %d, ela se move uma vez para esquerda\n", movimento3);
    }
        printf("A rainha está na casa %d para a esquerda, onde ela para.\n", movimento3);

    return 0;
}