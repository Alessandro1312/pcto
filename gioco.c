#include <stdio.h>

int main()
{
    int a;
    printf("ciao benvenuto in questo gioco\nscegli un personaggio\n1. Apollo\n2. Demetra\n3. Zeus\n4. Afrodite\n");
    scanf("%d", &a);

    if(a==1)
    {
        printf("hai scelto Apollo\n");
        printf("dio della musica e delle scienze di grandi capacità intelletuali Apollo si schiera a favore del fronte troiano nella guerra di Troia aiutandoli nella vittoria\nAlla fine della guerra Apollo si trovò di fronte a una scelta difficile. Doveva decidere se continuare a proteggere Troia o se lasciare che gli Achei la conquistassero. La sua decisione avrebbe avuto conseguenze durature per gli dei e gli uomini. Mentre il destino di Troia pendeva in bilico Apollo dovette affrontare una scelta che avrebbe segnato la storia\n");
        int b;
        printf("scegli cosa deve fare Apollo\n1. Rimanere con i troiani\n2. Allearsi con i greci\n");
        scanf("%d", &b);
        if(b==1)
        {
            printf("complimenti hai fatto la scelta giusta I troiani vincono la guerra di Troia sventando l'inganno del cavallo di legno\n");
        }

        else if(b==2)
        {
            printf("accidenti hai fatto la scelta sbagliata I troiani hanno perso la guerra a causa dell inganno del cavallo di legno\n");
        }

    }
    
    else if (a==2)
    {
        int c;
        printf("hai scelto Demetra\n");
        printf("figlia di Crono e Rea dea dell agricoltura pronta a qualsiasi cosa per proteggere i suoi raccolti\n");
        printf("La figlia di Demetra Proserpina è stata rapita da Pluto e portata negli inferi. L unico modo per riaverla è risolvere un indovinello\nNtall’acqua nasci, ntall’acqua pasci, ntall’acqua mòri. Cosa è?\n");
        printf("1. la Sicilia\n2. il pesce\n");
        scanf("%d", &c);

        if(c==1)
        {
            printf("complimenti hai fatto la scelta giusta Demetra ha scagionato sua figlia Proserpina ed i raccolti saranno per sempre buoni\n");
        }
        
        else if(c=2)
        {
            printf("accidenti hai fatto la scelta sbagliata percio Proserpina rimarra per sempre intrappolata nelle grinfie del perfido Plutone\n");
        }
       
    }
    else if (a==3)
    {
        int d;
        printf("hai scelto Zeus\n");
        printf("re degli dei dio del cielo e governatore dei fenomeni meteorologici il suo simbolo e il tuono scatena una guerra contro suo padre Crono per salvare i suoi fratelli inghiottiti dallo stesso genitore\n ");
        printf("In alto sui monti nella dimora degli dei Siede Zeus sovrano dei cieli e dei re due figli devoti dal cuore sincero Chiesero al padre un destino vero Uno desiderava la forza immensa l altro la saggezza\nla mente intensa Zeus sorrise ma una sola via poteva scegliere Per ognuno un dono da non\nrimpiangere Al primo donò la forza del tuono All'altro la saggezza\ncome un antico libro in ozio E così il destino fu sigillato con amore e con cura.\n Quale figlio ricevette la sua parte più pura?\n");
        printf("1. il figlio che ricevette la forza del tuono\n");
        printf("2. il figlio che ricevette la saggezza\n");
        scanf("%d", &d);
        
        if(d==1)
        {
            printf("accidenti hai fatto la scelta sbagliata ricordati sempre che la saggezza batte la forza\n");
        }

        else if(d==2)
        {
            printf("complimenti hai scelto la risposta giusta la saggezza vince sempre contro la forza\n");
        }

    }
    
    else if(a==4)
    {
        printf("Hai scelto Afrodite\n");
        printf("Afrodite la dea greca dell amore della bellezza e della fertilità emerge dalla schiuma marina nata dalla\nspuma che si formo intorno ai genitali di Urano tagliati dal dio Crono splendida e desiderabile e rappresentata con grazia e sensualita circondata da mirti e colombi\nIl suo amore incanta sia gli dei che gli uomini e il suo potere influisce sulle passioni più profonde\nprotettrice degli amanti e delle unioni incarna la forza irresistibile dell attrazione e la bellezza che risiede nell armonia\n");
        printf("Afrodite compie questa scelta cruciale nel momento in cui decide di influenzare il destino amoroso di due amanti. ");
        printf("");
    
    }
    
    else
    {
        printf("Perchè non rispetti le regole. Adesso ti tocca riniziare.\n");
    }

    
    printf("Grazie per aver provato questo gioco ora ti sfido con un altro personaggio.\n");
}