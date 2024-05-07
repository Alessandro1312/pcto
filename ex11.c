#include <stdio.h>

int main() 
{
    int a, b, c;
    printf("lunghezza di a:");
    scanf("%d", &a);
    printf("lunghezza di b:");
    scanf("%d", &b);
    printf("lunghezza di c:");
    scanf("%d", &c);

    if((a+b)>=c && (a+c)>=b && (b+c)>=a)
    {
        printf("è un triangolo\n");
       
        if(a==b && b==c)
        {
            printf("è un triangolo equilatero\n");
        }
        else if(a==b || b==c || c==a)
        {
            printf("è un triangolo isoscele\n");
        }

        else
        {
            printf("è un triangolo scaleno\n");
        }
    }
    else
    {
        printf("non è un triangolo\n");
    }
}