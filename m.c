#include <stdio.h>

int main() {
    char n[75];
    char sx;

    printf("Digite seu nome: ");
    scanf("%s", n);
    printf("Informe o sexo (M/F): ");
    scanf(" %c", &sx); 

    if (sx == 'M') {
        printf("Ilmo. Sr. %s\n", n);
    } else if (sx == 'F') {
        printf("Ilma. Sra. %s\n", n);
    } else {
        printf("Sexo informado inválido\n");
    }

    return 0;
}