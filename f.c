#include <stdio.h>

int main(){
    int a,b,c;
    printf("Insira valores para a,b e c:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a<b&&b<c)
    {
        printf("%d", a);
        printf("%d", b);
        printf("%d", c);
    }
    else if (b>a&&a>c)
    {
        printf("%d", b);
        printf("%d", a);
        printf("%d", c);
    }
    else if (c<a&&a<b)
    {
        printf("%d", c);
        printf("%d", a);
        printf("%d", b);
    }
    else if (b<c&&c<a)
    {
        printf("%d", b);
        printf("%d", c);
        printf("%d", a);
    }
    else if (a<c&&c<b)
    {
        printf("%d", a);
        printf("%d", c);
        printf("%d", b);
    }
    else if (c<b&&b<a)
    {
        printf("%d", c);
        printf("%d", b);
        printf("%d", a);
    }
    
    
    
}