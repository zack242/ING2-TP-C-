#include <iostream>
#include "Sommet.h"

Sommet::Sommet()
{
    Coords();
}
void Sommet::Saisie ()
{
    m_position.saisir();
}

void Sommet::afficher () const
{
        m_position.afficher();
        std::cout<<std::endl;
}

Sommet *AjouterSommet()
{
    Sommet* nouveau = new Sommet;
    nouveau->Saisie();
    return nouveau;
}

void AfficherSommet(std::vector <Sommet*> liste)
{
    for (size_t i=0; i<liste.size(); ++i)
    {
        std::cout<<i<<":";
        liste[i]->afficher();
    }

}


double Sommet::getXcoords()
{


return m_position.getX();

}

double Sommet::getYcoords()
{


return m_position.getY();

}

