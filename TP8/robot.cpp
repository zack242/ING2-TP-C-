#include "robot.h"
#include <iostream>

Robot::Robot()
{
    m_x=0;
}

Robot::Robot(char Type)
{
    m_type=Type;
    m_x=0;

}

RobotTeleporteur::RobotTeleporteur(char Type): Robot(Type)
{


}

RobotRapide::RobotRapide(char Type): Robot(Type)
{


}


void Robot::avancer(int i)
{
    m_x+=i;
}

void Robot::montrer()
{
    std::cout << std::string(m_x,' ');
    std::cout<<m_type<<std::endl;

}


RobotTeleporteur::RobotTeleporteur() : Robot()
{


}

void RobotTeleporteur::teleporter(int pos)
{

    m_x+=pos;

}

RobotRapide::RobotRapide() : Robot()
{


}

void RobotRapide::avancer(int i)
{
    m_x+=2*i;
}


RobotTraceur::RobotTraceur() : Robot()
{
    m_trace='.';

}


RobotTraceur::RobotTraceur(char Type,char trace): Robot(Type),m_trace{trace}
{


}

void RobotTraceur::montrer()
{
    std::cout << std::string(m_x,m_trace);
    std::cout<<m_type<<std::endl;

}

RobotCarburant::RobotCarburant(char Type,char trace,int carburant): RobotTraceur(Type,trace),m_carburant{carburant}
{


}

RobotCarburant::RobotCarburant():RobotTraceur(),m_carburant{0}
{


}

void RobotCarburant::avancer(int i)
{
    if(m_carburant>0){
            m_carburant--;
        m_x+=i;

        }
}


RobotEsgargot::RobotEsgargot(): RobotTraceur('@','_'),m_autoriser{0}
{

}

void RobotEsgargot::avancer(int i)
{
   m_autoriser+=i;
   if(m_autoriser==2*i)
    {
    m_x+=i;
    m_autoriser=0;
    }
}
