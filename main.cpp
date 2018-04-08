#include <iostream>
#include "thing.h"
using namespace std;

int main()
{
  thing t(2,3,1);
  cout<<"T : "<<endl;
  t.display();
  thing A=t;
  cout<<"A :"<<endl;
  A.display();
  A.set(4,5, 6);
  thing B;
  B=A;
  cout<<"B :"<<endl;
  B.display();
  t.set(39,44,65);
  cout<<"T :"<<endl;
  t.display();
  A.display();
  B.display();
  system ("pause");
}//https://github.com/MuhammadFahadIrfan/thing.git