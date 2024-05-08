#include <stdio.h>

int main() 
{
    int c=0;
    int div;
    int num;
    
    printf("scrivi un numero intero positivo\n");
    scanf("%d", &num);
    
    div= num-1;
    
    while(div>1)    //break all'interno delle parentesi quadre di while termina il ciclo//
    {
        
        if(num%div ==0)
        {
            c=c+1;
        }
        
        div=div-1;

    }

    if(c==0 && num>1)
    {
        printf("il tuo numero è primo\n");
    }

    else
    {
        printf("il tuo numero non è primo\n");
    }
}    