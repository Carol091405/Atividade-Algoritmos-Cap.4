#include <stdio.h>

int main(){
    int f;
    float g;
    printf("Apresente um numero inteiro:");
    scanf("%d", &f);

    g=f-2*(f/2); 

    if (g>0) { 
        printf("numero impar"); 
    } else { 
        printf("numero par"); 
    } 
}
