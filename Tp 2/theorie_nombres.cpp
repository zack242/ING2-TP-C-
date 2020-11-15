#include <iostream>
#include <vector>
#include <iostream>
#include "theorie_nombres.h"

using namespace std;


int sommeEntier(vector <int> nbrrecu)
{
    int somme(0);

    for(size_t i =0 ; i<nbrrecu.size(); i++)
    {

        somme=somme+nbrrecu[i];

    }

    return somme;
}


void afficherSommeentiers(vector <int> nbrrecu)
{

    for(size_t i =0 ; i<nbrrecu.size(); i++)
    {
        if(i==0)
            cout <<nbrrecu[i];
        else
            cout <<"+" <<nbrrecu[i];

    }

}


std::vector<int> recupDiviseurs(int entier)
{
    std::vector <int> nbr;

    for( size_t i =1; i < entier ; i++)
    {
        if ( entier%i==0 )
            nbr.push_back(i);
    }

    return nbr;
}

bool Entierparfait(int i)
{
std::vector <int> Diviseur;
int Somme(0);

        Diviseur=recupDiviseurs(i);
        Somme=sommeEntier(Diviseur);
        if(Somme==i) return true;
        else return false;


}

