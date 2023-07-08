#ifndef INSERTION_H_INCLUDED
#define INSERTION_H_INCLUDED

//fonction d'ajout d'un etudiant
listeEtudiant* ajouterEtudiant(listeEtudiant* etudiants, Etudiant etudiant){
    listeEtudiant* Element;
    Element=(listeEtudiant*)malloc(sizeof(listeEtudiant));
    Element->etudiant=etudiant;
    Element->suivant=etudiants;
    return Element;
}


/****************************************************************/
//Ajouter à la fin
listeEtudiant* ajouterFinEtudiant(listeEtudiant* etudiants, Etudiant etudiant){
    listeEtudiant* Element, *tempo;
    Element=(listeEtudiant*)malloc(sizeof(listeEtudiant));
    Element->etudiant=etudiant;
    Element->suivant=NULL;
    /*if(etudiants == NULL)
        return Element;
    else{*/
    tempo=etudiants;
    while(tempo != NULL){
        tempo=tempo->suivant;
    }
    tempo->suivant=Element;

    return etudiants;
}

#endif // INSERTION_H_INCLUDED
