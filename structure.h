#ifndef STRUCTETUDIANT_H_INCLUDED
#define STRUCTETUDIANT_H_INCLUDED

typedef struct Matiere{
    char code [8];
    char libelle [30];
    char enseignantRespo[45];
    float note1;
    float note2;
    float moyenne;
}Matiere;
//Structure Etudiant
struct Etudiant{
    int matricule;
    char nom[30];
    char prenom[30];
    int age;
    int sexe;
    Matiere matiere[10];
    float moy;
};
typedef struct Etudiant Etudiant;



typedef struct listeEtudiant{
    Etudiant etudiant;
    struct listeEtudiant *suivant;
}listeEtudiant;
struct listeMatiere{
    Matiere matiere;
    float note1;
    float note2;
    struct listeMatiere* suivant;
};
typedef struct listeMatiere listeMatiere;
#endif // STRUCTETUDIANT_H_INCLUDED
