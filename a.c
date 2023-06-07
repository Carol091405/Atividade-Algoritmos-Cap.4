#include <stdio.h>

int main() {
    int A,B,C;

    printf("Insira valores para A e B\n");
    scanf("%d", &A);
    scanf("%d", &B);

    if (A>B)
    {
        C=A-B;
    }
    else{
        C=B-A;
    }
    printf("RESULTADO:%d", C);   
     return 0;
}