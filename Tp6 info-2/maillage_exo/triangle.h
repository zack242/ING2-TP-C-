#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED
#include"couleur.h"
#include"Coords.h"
#include"Sommet.h"


class Triangle
{
private :

Couleur m_couleur ;
Sommet* t_index[3];

public:
Triangle();
void SaisirTriangle(std::vector<Sommet*> listeSommet);
void afficherTriangle();
void dessinerTriangle();



};
#endif // TRIANGLE_H_INCLUDED
