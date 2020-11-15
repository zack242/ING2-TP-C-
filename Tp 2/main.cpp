#include <iostream>
#include <vector>
#include <iostream>
#include "theorie_nombres.h"


using namespace std;

int main()
{
    std::vector <int> Diviseur;

    int i(0);
    int Somme(0);

    for(i=1; i<1000; ++i)
    {
        Diviseur=recupDiviseurs(i);
        Somme=sommeEntier(Diviseur);

        if(Somme==i)
        {
            cout <<i<<" = ";
            afficherSommeentiers(Diviseur);
            cout << endl;
        }

        /* //4.6
                if(Entierparfait(i)==true)
                    {
                    cout <<i<<" = ";
                    afficherSommeentiers(Diviseur);
                    cout << endl;
                    }
        */

    }
    return 0;
}

