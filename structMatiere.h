#ifndef STRUCTMATIERE_H_INCLUDED
#define STRUCTMATIERE_H_INCLUDED

typedef struct Matiere{
    char code [8];
    char libelle [30];
    char enseignantRespo[45];
    float note1;
    float note2;
    float moyenne;
}Matiere;

#endif // STRUCTMATIERE_H_INCLUDED
