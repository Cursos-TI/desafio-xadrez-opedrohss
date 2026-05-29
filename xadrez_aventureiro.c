#include <stdio.h>

int main(){

    int movimento1 = 1, movimento2;

    for (movimento2 = 1; movimento2 < 2; movimento2++)
    {
        while (movimento1 <= 2)
        {
            printf("Ele se movimenta para baixo\n");
            movimento1++;
        }
        printf("Ele se movimenta para esquerda\n");
    }
    

    return 0;
}