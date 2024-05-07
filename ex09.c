#include <stdio.h>

int main()
{
    int eta;   
    printf("scrivi la tua eta:");
    scanf("%d", &eta);
 

    //OPERATORI LOGICI: && and, || or, !not//
    if((eta>0 && eta<30)||(eta>60 && eta<100))
    {
        printf("entri\n");
    
    }
    else if (eta>=30 && eta<=60)
    {
        printf("non entri\n");
    }
}