#include <stdio.h>
int main() {

int A, B, C, D, E;

printf("Digite um valor inteiro para A:\n");
scanf("%d", &A);

int M = A;
int m = A;

printf("\nDigite um valor inteiro para B:\n");
scanf("%d", &B);

printf("\nApresente um valor inteiro para C:\n");
scanf("%d", &C);

printf("\nEscreva um valor inteiro para D:\n");
scanf("%d", &D);

printf("\nDetermine um valor inteiro para E:\n");
scanf("%d", &E);

if (B > M) {
M = B;
} else if (B < m) {
m = B;
}

if (C > M) {
M = C;
} else if (C < m) {
m = C;
}

if (D > M) {
M = D;
} else if (D < m) {
m = D;
}

if (E > M) {
M = E;
} else if (E < m) {
m = E;
}


    
printf("\n\n maior valor: %d.\n menor valor : %d.", M, m);    
    return 0;
}