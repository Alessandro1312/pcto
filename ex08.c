#include <stdio.h>

int main() 
{
    int eta;

    printf("inserisci età");
    scanf("%d", &eta);

    if(eta>18)
    {
        printf("sei maggiorenne\n");
    }
    else if (eta==18)
    {
        printf("sei maggiorenne\n");
    }
    else
    {
        printf("sei minorenne\n");
    }
}