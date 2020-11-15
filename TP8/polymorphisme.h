#ifndef POLYMORPHISME_H_INCLUDED
#define POLYMORPHISME_H_INCLUDED
#include "robot.h"
#include <vector>
#include <iostream>


std::vector<Robot*> remplirConteneurPolymorphe(std::vector<Robot*> bots);
void  utiliserConteneurPolymorphe(std::vector<Robot*> bots);
void viderConteneurPolymorphe(std::vector<Robot*> bots);
void testRobotPolymorphe(Robot &type);
void testConteneurPolymorphe();


#endif
