#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Apresente os valores de A,B e C:\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    delta = b * b - 4 * a * c;
    if (delta < 0) {
    printf("A equacao nao possui solucoes reais.\n");
    } else 
    if (delta > 0) {
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("Solucoes: x1 = %.2f e x2 = %.2f\n", x1,x2);
}   else {
    x1 = -b / (2 * a);
    printf("Solucao: x = %.2f\n", x1);
}
}
