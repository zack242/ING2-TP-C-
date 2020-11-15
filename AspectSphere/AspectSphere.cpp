#include <iostream>
#include "AspectSphere.h"

AspectSphere::AspectSphere()
{
    rayon=0;
    couleur="black";
}

AspectSphere::AspectSphere(std::string couleur,double rayon)
{
    this->rayon=rayon;
    this->couleur=couleur;
}

AspectSphere::~AspectSphere()
{


}

double AspectSphere::getRayon() const
{

return rayon;

}

std::string AspectSphere::getCouleur() const
{

return couleur;

}

void AspectSphere::saisir()
{
    double rayon(0);
    std::string couleur;
    std::cout<<"Saisir informations"<<std::endl;
    std::cout<<"Couleur: ";
    std::cin>> this->couleur ;
    std::cout<<"Rayon: ";
    std::cin>> this->rayon ;

}

void AspectSphere::afficher()
{
    std::cout << "La couleur est : "<< couleur << "le rayon est :"<<rayon <<"\n" ;

}


