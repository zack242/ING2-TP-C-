#include <iostream>
#include "robot.h"
#include "polymorphisme.h"
void testRobot();
void testRobotTeleporteur();
void testRobotRapide();
void testRobotTraceur();
void testRobotCarburant();
void testRobotEscargot();



int main()
{

    std::cout << "========= Tests directs =========\n";
    testRobot();
    testRobotTeleporteur();
    testRobotRapide();
    testRobotTraceur();
    testRobotCarburant();
    testRobotEscargot();


    std::cout << "========= Tests polymorphisme =========\n";
        Robot a{'A'};
        RobotTeleporteur b{'B'};
        RobotRapide c{'C'};
        RobotTraceur d{'D', '.'};
        RobotCarburant e{'E', '-', 5};
        RobotEsgargot f;
        testRobotPolymorphe( a );
        testRobotPolymorphe( b );
        testRobotPolymorphe( c );
        testRobotPolymorphe( d );
        testRobotPolymorphe( e );
        testRobotPolymorphe( f );

        std::cout << "========= Conteneur polymorphe =========\n";
        testConteneurPolymorphe();



    return 0;
}

void testRobot()
{
    Robot x{'A'};
    for (int i=0; i<8; ++i)
    {
        x.montrer();
        x.avancer(1); // Si on mettait 2 ici on irait 2x plus vite !
    }
}

void testRobotTeleporteur()
{
    RobotTeleporteur x{'B'};
    for (int i=0; i<8; ++i)
    {
        x.montrer();
        x.avancer(1);
        if (i==3)
            x.teleporter(8);
    }
}



void testRobotRapide()
{
    RobotRapide x{'C'};
    for (int i=0; i<8; ++i)
    {
        x.montrer();
        x.avancer(1);
    }
}

void testRobotTraceur()
{
    RobotTraceur x{'D', '.'};
    for (int i=0; i<8; ++i)
    {
        x.montrer();
        x.avancer(1);
    }
}

void testRobotCarburant()
{
    RobotCarburant x{'E', '-', 5};
    for (int i=0; i<8; ++i)
    {
        x.montrer();
        x.avancer(1);
    }
}

void testRobotEscargot()
{
    RobotEsgargot x{};
    for (int i=0; i<8; ++i)
    {
        x.montrer();
        x.avancer(1);
    }
}





