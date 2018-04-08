#include <iostream>
#include <string>
using namespace std;

class thing
{
  public:
  thing()
  {this->x=new int(0);
  this->y=0;
  this->z=0;}

  thing (int X,int y,int z)
  {
    x=new int(X);
    *x=X;
    this->y=y;
    this->z=z;
  }

  thing (thing& replica)
  {
    this->x=replica.x;
    replica.x=new int;
    this->y=replica.y;
    this->z=replica.z;
  }
  void set(int X,int y,int z)
  {
    this->x=new int(X);
    this->y=y;
    this->z=z;
  }

  void operator =(thing& v)
  {
    x=new int;
    x=v.x;
    this->y=v.y;
    this->z=v.z;
  } 

  
  void display()
  {
    int a=*x;
    cout<<"VALUE OF X ="<<a<<endl<<"VALUE OF Y ="<<this->y<<endl<<"VALUE OF Z ="<<this->z<<endl;
  }



  

  private:
  int *x;
  int y,z;
  };