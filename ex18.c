#include <stdio.h>

int main()
{
     char nome [5]={'s','a','r','a','\0'}; //char nome[]= "sara";//
     int i=0;
    printf("%s", nome);
}

#include <stdio.h>

int main()
{
    char nomeutente[50];
    scanf("%s", nomeutente); //con le stringhe non va la & perchè non dobbiamo indicare l'indirizzo della memoria//
    scanf("%c", nomeutente[45]);     //per cambiare una sola lettera//
}