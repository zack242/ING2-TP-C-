#ifndef SOMMET_H_INCLUDED
#define SOMMET_H_INCLUDED
#include "coords.h"

class Sommet
{
    private :
        Coords m_position;

    public :
        Sommet();
        void Saisie ();
        void afficher () const;
        double getXcoords();
        double getYcoords();

};


Sommet *AjouterSommet();
void AfficherSommet(std::vector <Sommet*> liste);



#endif // SOMMET_H_INCLUDED
