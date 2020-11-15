#ifndef VOYAGE_H_INCLUDED
#define VOYAGE_H_INCLUDED
#include <iostream>
#include <vector>
#include "Sejour.h"

class Voyage // Declaration de la classe voyage
{
private:
    std::string m_titre;
    std::vector<Sejour*> sejourVoyage; // Creation d'un vector de sejour pour associer chaque clients  au sejour qu'il a fait
public:
    Voyage (std::string titre);
    Voyage ();
};
#endif // VOYAGE_H_INCLUDED
