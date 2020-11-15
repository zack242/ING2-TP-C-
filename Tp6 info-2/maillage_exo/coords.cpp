#include "coords.h"
#include <iostream>
#include <windows.h>

Coords::Coords(double x, double y)
    : m_x{x}, m_y{y}
{ }

Coords::Coords()
    : m_x{0}, m_y{0}
{ }

void Coords::afficher() const
{
    std::cout << "(" << m_x << ", " << m_y << ")";
}

void Coords::saisir()
{
    std::cout << "Veuillez saisir x et y SVP : ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
    std::cin >> m_x >> m_y;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

double Coords::getX() const
{
    return m_x;
}

double Coords::getY() const
{
    return m_y;
}

/// Somme vectorielle (version courte)
Coords operator+(const Coords& c1, const Coords& c2)
{
    return {c1.m_x + c2.m_x, c1.m_y + c2.m_y  };
}


