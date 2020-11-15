#include <iostream>
#include <sstream>
#include "triangle.h"
#include "Sommet.h"
#include "svgfile.h"
#include "couleur.h"



Triangle::Triangle()
{

    Couleur();
    Sommet();

};

void Triangle::SaisirTriangle(std::vector<Sommet*> listeSommet)
{
    int x,y,z;
    m_couleur.saisir();
    std::cout<<"Saisir 3 indice : ";
    std::cin >> x ;
    std::cin >> y ;
    std::cin >> z ;

    t_index[0]=listeSommet[x];
    t_index[1]=listeSommet[y];
    t_index[2]=listeSommet[z];


    afficherTriangle();

}

void Triangle::afficherTriangle()
{
    m_couleur.afficher();


}

void Triangle::dessinerTriangle()
{
    Svgfile svgout;

    svgout.addTriangle(t_index[0]->getXcoords(),t_index[0]->getYcoords(),
                       t_index[1]->getXcoords(),t_index[1]->getYcoords(),
                       t_index[2]->getXcoords(),t_index[2]->getYcoords(),m_couleur);


}
