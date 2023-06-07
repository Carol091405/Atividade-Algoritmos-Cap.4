#include <stdio.h>

int main() {
    float N1,N2,N3,N4,NE,MD1,MD2;
    printf("Digite suas 4 notas:\n");
    scanf("%f", &N1);
    scanf("%f", &N2);
    scanf("%f", &N3);
    scanf("%f", &N4);

    MD1=(N1+N2+N3+N4)/4;

    if (MD1>=7)
    {
        printf("Aprovado\n");
        printf("Media:%f", MD1);
    }
    else{
        printf("Media:%f\n", MD1);
        printf("Sua media nao foi suficiente. Apresente a nota de exame:");
        scanf("%f", &NE);
        MD2=(MD1+NE)/2;
        if (MD2>=5)
        {
            printf("Aprovado em exame\n");
        }
        else{
            printf("Reprovado\n");
        }
        printf("Sua media foi:%f", MD2);
    }
    return 0;
}