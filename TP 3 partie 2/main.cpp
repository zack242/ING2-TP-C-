#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

void afficherAccueil()
{
    cout << "Bienvenue dans l'application ''filtrage divisibles'' "<< endl << endl ;

    cout << "Entrer 0 ou negatif pour terminer la saisie" << endl;
    cout << "Puis 0 ou nagatif pour quitter l'application" << endl << endl;


}

std::vector<int> saisirEntier()
{
    int entier(0);
    std::vector<int> ListeEntier(0);

    cout << "Veuillez entrer des entiers " << endl;

    do
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
        cin>> entier;

        ListeEntier.push_back(entier);


    }
    while(entier>0);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
    cout <<endl;
    ListeEntier.pop_back();

    return ListeEntier;
}


void afficherEntier(std::vector<int> ListeEntier)
{

    cout << "Voici la liste de vos " << ListeEntier.size() << " entiers" << endl << endl;

    for(size_t i = 0; ListeEntier.size()>i; i++)
    {

        cout <<i<<" -> "<< ListeEntier[i] << endl ;

    }

    cout << "-------------------------"<< endl << endl;

}


std::vector<int> trouverDivisible(std::vector<int> ListeEntier,int Diviseur)
{

    std::vector<int> ListeDiviseur(0);


    for(size_t i = 0; ListeEntier.size()>i; i++)
    {

        if(ListeEntier[i]%Diviseur==0)
            ListeDiviseur.push_back(ListeEntier[i]);

    }
    return ListeDiviseur;

}


int main()
{
    std::vector<int> ListeEntier;
    int Diviseur(0);

    afficherAccueil();
    ListeEntier=saisirEntier();

    do
    {
        afficherEntier(ListeEntier);

        cout << "Veuillez entrer un diviseur "<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
        cin >> Diviseur ;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
        if(Diviseur!=0)

            ListeEntier=trouverDivisible(ListeEntier,Diviseur);

    }
    while(Diviseur>0);


    return 0;
}

