#include <stdio.h>

int main()
{

    //VARIABILI//


    int a; //NUMERI INTERI//
    float b = 2.5;  //NUMREI CON VIRGOLA, MASSIMO 6 NUMERI DOPO LA VIRGOLA//
    double c = 2.6; //NUMERI CON VIRGOLA, MASSIMO 15 NUMERI DOPO LA VIRGOLA//

    a = 2.7;

    printf("a: %d\nb: %f\n", a, b); //identificazione per int: %d//
    printf ("b: %f\n", b); // identificaziobne di float: %f//
    printf ("c: %lf\n", c); //identificazione di double: %lf//
     printf ("a+10 = %d\n", a+10); //somma//
     printf("a-b: %f\n", a-b);
     int divisione = a/b;
     printf("divisione: %f\n", a/b);

}