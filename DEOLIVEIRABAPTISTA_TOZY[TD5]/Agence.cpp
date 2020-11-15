#include "Agence.h"


Agence::Agence() // Constructeur
{




}

void Agence::construireTest() // Constructeur test
{
std::vector <Voyage*> vec; // Declaration des vectors de test
std::vector <Sejour*> vecSejour;

Voyage* V1; // Declaration des pointeurs
Voyage* V2;

V1 = new Voyage("Mongolie"); // Allocation dynamique
V2 = new Voyage("Laponie");

vec.push_back(V1); // Ajout en local des poiteurs sur voyage
vec.push_back(V2);

AjouterVoyage(vec); // Set du vecteur dans notre classe

Sejour* Sejour_1;
Sejour* Sejour_2;
Sejour* Sejour_3;

Sejour_1 = new Sejour("14/06/2021");
Sejour_2= new Sejour("13/06/2022");
Sejour_3= new Sejour ("19/02/2022") ;

vecSejour.push_back(Sejour_1);
vecSejour.push_back(Sejour_2);
vecSejour.push_back(Sejour_3);

std::vector<Client*> vecclient;

Client* Client_1;
Client* Client_2;

Client_1 = new Client("Dubois");
Client_2 = new Client("Martin");

vecclient.push_back(Client_1);
vecclient.push_back(Client_2);







}

void  Agence::AjouterVoyage(const std::vector<Voyage*> vec) // on copie le vec en parametre dans notre attributs
{

this->ListeVoyage=vec;



}

void Agence::Affichage() // affichage des donnes
{
std::cout<<"Voyage : \n";
for(size_t i = 0 ; i < ListeVoyage.size(); i++)
    {
    std::cout<<"["<<i<<"]"<<"Voyage en "<< ListeVoyage[i] <<std::endl;
    }

 /*
std::cout<<"Sejours : \n";
for(size_t i = 0 ; i < ListeSejours.size(); i++)
    {
    std::cout<<"["<<i<<"]"<<"Sejours en "<< ListeSejours[i] <<std::endl;
    }
*/


std::cout<<"Clients : \n";
for(size_t i = 0 ; i < ListeClient.size(); i++)
    {
    std::cout<<ListeClient[i]<<":"<<std::endl;
    }





}
