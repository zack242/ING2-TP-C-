#include "polymorphisme.h"


void testRobotPolymorphe( Robot &type)
{

    type.avancer(1);
    type.montrer();



}

void testConteneurPolymorphe()
{
    std::vector<Robot*> bots;
    bots=remplirConteneurPolymorphe(bots);
    utiliserConteneurPolymorphe(bots);
    viderConteneurPolymorphe(bots);

}

std::vector<Robot*> remplirConteneurPolymorphe(std::vector<Robot*> bots)
{


    bots.push_back(new Robot('A'));
    bots.push_back(new RobotTeleporteur {'B'});
    bots.push_back(new RobotRapide {'C'});
    bots.push_back(new RobotTraceur {'D', '.'});
    bots.push_back(new  RobotCarburant {'E', '-', 5});
    bots.push_back(new RobotEsgargot );


    return bots;

}

void  utiliserConteneurPolymorphe(std::vector<Robot*> bots)
{

    for(int i=0; i<8; i++)
    {
        for (auto& bs: bots)
        {


             bs->montrer();


            RobotTeleporteur* bz = dynamic_cast<RobotTeleporteur*>(bs);

            if (bz)
                if(i==3)
                {
                    bz->teleporter(8);
                }

 bs->avancer(1);
        }

    }

}

void viderConteneurPolymorphe(std::vector<Robot*> bots)
{
    for (const auto& pz: bots)
        delete pz;

}

