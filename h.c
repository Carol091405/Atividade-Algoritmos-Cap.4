#include <stdio.h>
int main () {

int A, A2, A3;
int B, B2, B3;
int C, C2, C3;
int D, D2, D3;
int contador = 0;

printf("Digite um valor inteiro para A:\n");
scanf("%d", &A);

printf("\nApresente um valor inteiro para B:\n");
scanf("%d", &B);

printf("\nEscreva um valor inteiro para C:\n");
scanf("%d", &C);

printf("\nDetermine um valor inteiro para D:\n");
scanf("%d", &D);

A2 = A % 2;
A3 = A % 3;

B2 = B % 2;
B3 = B % 3;

C2 = C % 2;
C3 = C % 3;

D2 = D % 2;
D3 = D % 3;

if (A2 == 0 && A3 == 0) {
    printf("\n%d divide por 2 e por 3.", A);
}   else {
        if (A2 == 0 || A3 == 0) { 
            if (A2 == 0) {
            printf("\n%d divide por 2", A);
            ++contador;
            } else {
            printf("\n%d divide por 3", A);
            ++contador;
}}}

if (B2 == 0 && B3 == 0) {
    printf("\n%d divide por 2 e por 3.", B);
}   else {
        if (B2 == 0 || B3 == 0) { 
            if (B2 == 0) {
            printf("\n%d divide por 2\n", B);
            ++contador;
            } else {
            printf("\n%d divide por 3", B);
            ++contador;
}}}

if (C2 == 0 && C3 == 0) {
    printf("\n%d divide por 2 e por 3.", C);
}   else {
        if (C2 == 0 || C3 == 0) { 
            if (C2 == 0) {
            printf("\n%d divide por 2\n", C);
            ++contador;
            } else {
            printf("\n%d divide por 3", C);
            ++contador;
}}}

if (D2 == 0 && D3 == 0) {
    printf("\n%d divide por 2 e por 3.", D);
}   else {
        if (D2 == 0 || D3 == 0) { 
            if (D2 == 0) {
            printf("\n%d divide por 2\n", D);
            ++contador;
            } else {
            printf("\n%d divide por 3", D);
            ++contador;
}}}

if (contador == 0) {
    printf("\n\nNenhum numero divide por 2 ou por 3.");
}
    
    return 0;
}