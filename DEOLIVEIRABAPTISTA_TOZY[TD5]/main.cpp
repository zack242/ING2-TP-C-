#include <iostream>
#include <vector>
#include "Client.h"
#include "Sejour.h"
#include "Voyage.h"
#include "Agence.h"


int main()
{
int choix;
Agence Agencetest;
    while (!0) // Boucle infini pour la gestion du menu avec un switch
    {
        Agencetest.Affichage(); // on affiche une premiere fois
        std::cout<<"0/quitter\n1/associer client-sejour\n2/changer titre voyage\n"<<std::endl;
        std::cin>>choix;
        switch(choix)
        {
        case 1:
            break;
        case 2:
            break;
        case 0:
            exit(0);
        }

    }
    return 0;
}
