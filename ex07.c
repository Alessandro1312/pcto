#include <stdio.h>

int main()
{
    int a, b;
    printf("scegli un numero a");
    scanf("%d", &a);
    printf("scegli un numero b");
    scanf("%d", &b);
    if (a>b)
    {
        printf("a è maggiore di b\n");
    }
    else if (a==b)
    {
        printf("a è uguale a b\n");

    }
    else
    {
        printf("a è minore di b\n");

    }
}