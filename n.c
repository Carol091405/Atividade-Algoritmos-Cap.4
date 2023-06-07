#include <stdio.h>

int main() {
    int A,B,C,Z;
    printf("Digite os valores que deseja:\n");
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    Z=A+B+C;
    if (Z>=100)
    {
        printf("%d", Z);
    }
    return 0;

}