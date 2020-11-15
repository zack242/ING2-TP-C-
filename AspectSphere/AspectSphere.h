#ifndef ASPECTSPHERE_H_INCLUDED
#define ASPECTSPHERE_H_INCLUDED
class AspectSphere
{
private:
    std::string couleur ;
    double rayon ;

public:
    AspectSphere();
    AspectSphere(std::string couleur , double rayon );
    ~AspectSphere();

    void afficher();
    void saisir();
    double getRayon() const;
    std::string getCouleur() const;

};


#endif // ASPECTSPHERE_H_INCLUDED
