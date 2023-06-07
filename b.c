#include <stdio.h>

int main() {
    float a,b;

    printf("Escreva um valor inteiro:\n");
    scanf("%f", &a);

    if (a<0)
    {
        b=a*(-1);
        printf("Valor positivo:%f", b);
    }
    else{
        printf("Valor positivo:%f", a);
    }
     return 0;
}