
class Mass{
  public:
    void setPos(double position[]);
    void setVel(double velocity[]);
    void setAcc(double acceleration[]);
    double getMass(void);
    double* getPos(void);
    double* getVel(void);
    double* getAcc(void);
    Mass(double mass, double position[], double velocity[]); //constructor

  private:
    double m; //Mass
    double pos[3];
    double vel[3];
    double acc[3];


};

Mass::Mass(double mass, double position[], double velocity[]){
  m=mass;
  for(int ii=0; ii<3; ii++){
    pos[ii]=position[ii];
    vel[ii]=velocity[ii];
  }
}

void Mass::setPos(double position[]){
  for(int ii=0; ii<3; ii++)
    pos[ii]=position[ii];
}

void Mass::setVel(double velocity[]){
  for(int ii=0; ii<3; ii++)
    vel[ii]=velocity[ii];
}

void Mass::setAcc(double acceleration[]){
  for(int ii=0; ii<3; ii++)
    acc[ii]=acceleration[ii];
}

double Mass::getMass(void){
  return m;
}

double* Mass::getPos(void){
  return pos;
}

double* Mass::getVel(void){
  return vel;
}

double* Mass::getAcc(void){
  return acc;
}
