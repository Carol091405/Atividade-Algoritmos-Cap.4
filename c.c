#include <stdio.h>

int main() {
    float N1,N2,N3,N4,MD;

    printf("Digite suas notas:\n");
    scanf("%f", &N1);
    scanf("%f", &N2);
    scanf("%f", &N3);
    scanf("%f", &N4);

    MD=(N1+N2+N3+N4)/4;

    if (MD>5)
    {
        printf("Aprovado\n");
    }
    else{
        printf("Reprovado\n");
    }
    printf("Media obtida:%f", MD);
     return 0;
}