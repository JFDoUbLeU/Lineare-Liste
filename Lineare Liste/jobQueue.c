//
//  JobQueue.c
//  Lineare LISTE III
//
//  Created by Marlon Juntorius on 09.01.23.
//

#include <stdio.h>      //erst Systemdateien inkludieren

#include <stdlib.h>     //hier für dynamischen Speicher einbinden (malloc)

#include "JobQueue.h"



// Hier jetzt die Funktionen für JobQueue.h in richtigen Code umsetzen und die Algorythmen erstellen.

// Funktion pushJQ implementieren mit func(){}, statt ;
int pushJQ(JobQueue_t* pJQ, Job_t* pJob)
{

    return 0;
}



// Funktion popJQ implementieren mit func(){}, statt ;
Job_t popJQ(JobQueue_t* pJQ)
{
    Job_t job_return = { 0 }; // neue Returnvariable mit leerem Inhalt erstellen . Bei {0} wird ALLES auf Null gesetzt.

    // funktion 'free()', Speicher wird "freigegeben" !

    return job_return;          // return VALUE
}



// Funktion printJQ implementieren mit func(){}, statt ;
// Übergabe von pointer auf JobQueue
// Wir kennen Startaddresse , größe der Elemente der JobQueue
void printJQ(JobQueue_t* pJQ)
{
    // Case1: Wenn die Liste JobQueue_x leer ist, dann 'leer' ausdrucken.
    // 0 = wirkliche null, NULL = nicht definiert

    if ((pJQ->first) == NULL)
    {
        printf("%s", "leer \n");
    }
    else {  // Case2: Objekte der Liste ausdrucken
        // Erstes Element, Addresse holen, immer Verweis auf next betrachten und nächstes Element holen.

        QueueEL_t* pEL = pJQ->first;
        // pEL = pointer auf Element.

        for (; pEL != NULL; pEL = pEL->next)  // wenn pEL nicht Endelement, dann ist Schritt = pEL = pEL.next, also nächstes Element, auf das pEL verweist.
        {
            // Ausgabe von pEL (Listenelement) -> Jobelement im Listenelement. Werte von Jobelement im Listenelement

            printf("%4d \t %s", pEL->Job.priority, pEL->Job.description);
            // %t = tab ausgeben
        }
    }





}