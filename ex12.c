#include <stdio.h>

int main()
{
    int anno;
    printf("anno di nascita: ");
    scanf("%d", &anno);

    if(anno<1969)
    {
        printf("sei nato prima dell'arrivo dell'uomo sulla luna\n");
        printf("1969-anno, %d anni prima\n", 1969-anno);

    }
    else
    {
        printf("sei nato dopo l'atterraggio sulla luna\n");
        printf("anno-1969: %d anni dopo\n", anno-1969);
    }
}