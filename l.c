#include <stdio.h>

int main(){
    int z;
    printf("Insira um valor numerico inteiro:");
    scanf("%d", &z);
    if (!(z>3))
    {
        printf("%d", z);
    }
    return 0;
}