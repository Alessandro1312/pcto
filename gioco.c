#include <stdio.h>

int main()
{
    int a;
    printf("scegli un personaggio\n1. Apollo\n2. Demetra\n3. Zeus\n");
    scanf("%d", &a);

    if(a==1)
    {
        printf("hai scelto Apollo\n");
    }
    else if (a==2)
    {
        printf("hai scelto Demetra\n");
    }
    else if (a==3)
    {
        printf("hai scelto Zeus\n");
    }
}