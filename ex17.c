#include <stdio.h>

int main()
{
    int b=0;
    int numeri [100];
    while(b<100)
    {
        printf("inserisci un numero\n");
        scanf("%d", &numeri[b]);
        b= b+1;
    }
}