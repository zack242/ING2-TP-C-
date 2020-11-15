#ifndef AGENCE_H_INCLUDED
#define AGENCE_H_INCLUDED
#include <iostream>
#include <vector>
#include "Sejour.h"
#include "Voyage.h"
#include "Client.h"

class Agence // Classe agence
{
private: // Attributs

    std::vector <Sejour*> ListeSejour;
    std::vector <Voyage*> ListeVoyage;
    std::vector <Client*> ListeClient;

public: // methode
    Agence();
    void  construireTest ();
    void afficherAgence ();
    void Affichage();
    void AjouterVoyage( const std::vector<Voyage*> &vec);


};
#endif // AGENCE_H_INCLUDED
