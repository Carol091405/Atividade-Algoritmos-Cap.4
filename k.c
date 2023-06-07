#include <stdio.h>

int main(){
    int x;
    printf("Digite um valor inteiro de 1 a 9:");
    scanf("%d", &x);
    if (x<1||x>9)
    {
        printf("O valor esta fora da faixa permitida");
    }
    else{
        printf("O valor esta na faixa permitida");
    }
    return 0;
}