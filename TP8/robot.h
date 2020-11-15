#ifndef ROBOT_H_INCLUDED
#define ROBOT_H_INCLUDED

class Robot
{
protected :
    char m_type ;
    int m_x;

public :
    Robot();
    Robot(char type );
  virtual  void avancer(int i );
  virtual   void montrer();



};

class RobotTeleporteur : public Robot
{
public:
    RobotTeleporteur();
    RobotTeleporteur(char Type);
    virtual void teleporter(int pos);


};

class RobotRapide : public Robot
{
public:
    RobotRapide();
    RobotRapide(char Type);
    void  avancer(int i);


};


class RobotTraceur: public Robot
{
private :
    char m_trace;

public:
    RobotTraceur();
    RobotTraceur(char Type,char trace);
   void montrer();


};

class RobotCarburant: public RobotTraceur
{
private :
  int m_carburant ;

public:
   RobotCarburant();
   RobotCarburant(char Type , char trace,int carburant);
  void avancer(int i);



};

class RobotEsgargot:public RobotTraceur
{
private:
    int m_autoriser;

public:
  RobotEsgargot();
  void avancer(int i);



};

#endif // ROBOT_H_INCLUDED
