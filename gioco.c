#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int eta;

    printf("Inserisci la tua eta: ");
    scanf("%d", &eta);
    if (eta>=18)
    {
    
    
    printf("ciao benvenuto in questo gioco nel quale dovrai aiutare vari dei nelle loro scelte\nscegli un personaggio\n1. Apollo\n2. Demetra\n3. Zeus\n4. Afrodite\n");
    scanf("%d", &a);

    if (a == 1)
    {
        printf("hai scelto Apollo\n");
        printf("dio della musica e delle scienze di grandi capacità intelletuali Apollo si schiera a favore del fronte troiano nella guerra di Troia aiutandoli nella vittoria\nAlla fine della guerra Apollo si trovò di fronte a una scelta difficile. Doveva decidere se continuare a proteggere Troia o se lasciare che gli Achei la conquistassero. La sua decisione avrebbe avuto conseguenze durature per gli dei e gli uomini. Mentre il destino di Troia pendeva in bilico Apollo dovette affrontare una scelta che avrebbe segnato la storia\n");
        
        printf("scegli cosa deve fare Apollo\n1. Rimanere con i troiani\n2. Allearsi con i greci\n");
        scanf("%d", &b);
        if (b == 1)
        {
            printf("complimenti hai fatto la scelta giusta I troiani vincono la guerra di Troia sventando l'inganno del cavallo di legno\n");
        }

        else if (b == 2)
        {
            printf("accidenti hai fatto la scelta sbagliata I troiani hanno perso la guerra a causa dell inganno del cavallo di legno\n");
        }
    }

    else if (a == 2)
    {
        
        printf("hai scelto Demetra\n");
        printf("figlia di Crono e Rea dea dell agricoltura pronta a qualsiasi cosa per proteggere i suoi raccolti\n");
        printf("La figlia di Demetra Proserpina è stata rapita da Pluto e portata negli inferi. L unico modo per riaverla è risolvere un indovinello\nNtall’acqua nasci, ntall’acqua pasci, ntall’acqua mòri. Cosa è?\n");
        printf("1. la Sicilia\n2. il pesce\n");
        scanf("%d", &c);

        if (c == 1)
        {
            printf("complimenti hai fatto la scelta giusta Demetra ha scagionato sua figlia Proserpina ed i raccolti saranno per sempre buoni\n");
        }

        else if (c = 2)
        {
            printf("accidenti hai fatto la scelta sbagliata percio Proserpina rimarra per sempre intrappolata nelle grinfie del perfido Plutone\n");
        }
    }
    else if (a == 3)
    {
        printf("hai scelto Zeus\n");
        printf("re degli dei dio del cielo e governatore dei fenomeni meteorologici il suo simbolo e il tuono scatena una guerra contro suo padre Crono per salvare i suoi fratelli inghiottiti dallo stesso genitore\n");
        printf("In alto sui monti nella dimora degli dei siede Zeus sovrano dei cieli e dei re due figli devoti dal cuore sincero chiesero al padre un dono. Uno desiderava la forza immensa l altro la saggezza\nla mente intensa Zeus sorrise ma una sola via poteva scegliere. Per ognuno un dono da non\nrimpiangere. Al primo donò la forza del tuono all'altro la saggezza\ncome un antico libro in ozio E così il destino fu sigillato con amore e con cura.\nQuale figlio ricevette la sua parte più pura?\n");
        printf("1. il figlio che ricevette la forza del tuono\n");
        printf("2. il figlio che ricevette la saggezza\n");
        scanf("%d", &d);

        if (d == 1)
        {
            printf("accidenti hai fatto la scelta sbagliata ricordati sempre che la saggezza batte la forza\n");
        }
        else if (d == 2)
        {
            printf("complimenti hai scelto la risposta giusta la saggezza vince sempre contro la forza\n");
        }
    }
    else if (a == 4)
    {
        printf("Hai scelto Afrodite\n");
        printf("Afrodite la dea greca dell amore della bellezza e della fertilità emerge dalla schiuma marina nata dalla\nspuma che si formo intorno ai genitali di Urano tagliati dal dio Crono splendida e desiderabile e rappresentata con grazia e sensualita circondata da mirti e colombi\nIl suo amore incanta sia gli dei che gli uomini e il suo potere influisce sulle passioni più profonde\nprotettrice degli amanti e delle unioni incarna la forza irresistibile dell attrazione e la bellezza che risiede nell armonia\n");
        printf("Afrodite deve prendere una scelta cruciale nel momento in cui decide di influenzare il destino amoroso di due amanti e solo risolvendo un enigma i due amanti potranno stare insieme per sempre\n");
        printf("Nelle acque turchesi dell Egeo mi sono immerso  dove le onde danzano e il sole si e tuffato\nAfrodite  regina degli affetti e del cuore davanti a me si staglia in tutta la sua gloria ma con un solo tocco può far sì che l'amore muoia\nCosa sono?\n");
        printf("1. un cuore innamorato\n");
        printf("2. una rosa appena sbocciata\n");
        scanf("%d", &e);

        if (e == 1)
        {
            printf("hai fatto la scelta sbagliata e così facendo l amore e morto\n");
        }

        else if (e == 2)
        {
            printf("complimenti hai fatto la scelta giusta e hai salvato l amore eterno\n");
        }
    }

    else
    {
        printf("Perchè non rispetti le regole. Adesso ti tocca riniziare.\n");
    }

    printf("Grazie per aver provato questo gioco ora ti sfido con un altro personaggio.\n");
    }

    else
    {
        printf("mi dispice ma da minorenne non puoi utilizzare questo gioco\n");
    }
}