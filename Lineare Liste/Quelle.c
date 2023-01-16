//
//  main.c
//  Lineare LISTE III
//
//  Created by Marlon Juntorius on 09.01.23.
//

#include <stdio.h>
#include "JobQueue.h"



int main(int argc, const char* argv[]) {
    //zwei leere Queues vom Typ JobQueue_t definieren

    JobQueue_t jobQueue_1 = { 0 };
    JobQueue_t jobQueue_2 = { 0 };

    // 5 neue Jobs (also Job- Objekte erstellen)

    Job_t Job_1 = { 10, "Essen gehen" };
    Job_t Job_2 = { 5, "Lesen" };
    Job_t Job_3 = { 20, "Zähne putzen" };
    Job_t Job_4 = { 30, "Schlafen" };
    Job_t Job_5 = { 100, "Lernen" };



    // Job- Objekte in die JobQueue_q laden via unserer PushJQ- funktion
    pushJQ(&jobQueue_1, &Job_1);
    //auf die Addresse von jobQueue_1 mit '&'  verweisen. Danach Job- Objekt 'Job_x' mit '&' zuweisen ( Addresse an Addresse zusweisen)

    pushJQ(&jobQueue_1, &Job_2);

    pushJQ(&jobQueue_1, &Job_3);

    pushJQ(&jobQueue_2, &Job_4);

    pushJQ(&jobQueue_2, &Job_5);


    // Ausgeben des Inhalts unserer Queue mithilfe der von uns implementierten Funkion 'printJQ(''&''JobQueue')'
    printJQ(&jobQueue_1);

    // Ausgeben des Inhalts unserer Queue mithilfe der von uns implementierten Funkion 'printJQ(''&''JobQueue')'
    printJQ(&jobQueue_2);


    // Herauslösen eines Elements aus einer JobQueue mithilfe der von uns implementierten Funktion Job_x = 'popJq(''&''JobQueue'')'

    Job_3 = popJQ(&jobQueue_1);
    // Überprüfung der Operation popJQ für Job_3 mihilfe der Ausgabe der Funktion "printJQ)"
    printJQ(&jobQueue_1);

    // Ausgabe der Anzahle der Elemente in jobQueue_1
    printf("%d", jobQueue_1.count);

}