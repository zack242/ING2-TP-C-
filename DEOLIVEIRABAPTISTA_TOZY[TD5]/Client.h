#ifndef CLIENT_H_INCLUDED
#define CLIENT_H_INCLUDED
#include <iostream>
#include <vector>
#include "Sejour.h"

class Client // Declaration de class Client
{
    private: // Attribus prive
    std::string m_nom;
    std::vector<Sejour*> sejourClient;
    public:
    Client();
    Client(std::string m_nom);





};

#endif // CLIENT_H_INCLUDED
