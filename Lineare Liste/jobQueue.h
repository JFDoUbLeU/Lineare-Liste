//
//  JobQueue.h
//  Lineare LISTE III
//
//  Created by Marlon Juntorius on 09.01.23.
//

#ifndef JobQueue_h  // wenn JobQueue_h noch nicht definiert ist, dann tue das folgende #Präprozessor

#define JobQueue_h  // definiere JobQueue_h

#define MAX_LENGTH  100       //Definieren von maximaler Länge des Strings in "struct" Job

//strukturen vor Funktionen

// Neue Struktur Job anlegen
typedef struct Job {
    int priority;
    char description[MAX_LENGTH];
} Job_t;


// Neue Struktur QueueEL anlegen
typedef struct QueueEL {

    Job_t Job;                  //Enthält Element vom Typ Job_t mit dem Alias "Job"

    struct QueueEL* next;    // pointer auf das nächste Element (pointer auf Speicherbereich vom Typ QueueEL (QueueEL_t), hier struct QueueEL, da typedef erst nach den Anweisungen im struct.

} QueueEL_t;
//Typedefinition, auch ohne "struct" als Keyword verwendbar ! HIER INTERN


struct JobQueue {

    int count;

    QueueEL_t* first;       //pointer auf erstes Element vom Typ QueueEL_t
    QueueEL_t* last;        //pinter auf letztews Element vom Typ QueueEL_t

    // ToDo
};
typedef struct JobQueue JobQueue_t; //Typedefinition, auch ohne "struct" als Keyword verwendbar ! HIER EXTERN



//Funktionen als Pseudo implementieren.

int pushJQ(JobQueue_t* pJQ, Job_t* pJob);

Job_t popJQ(JobQueue_t* pJQ);

void printJQ(JobQueue_t* pJQ);

//Funktionen jetzt richtig in JobQueue.c erstellen !!!


#endif /* JobQueue_h */