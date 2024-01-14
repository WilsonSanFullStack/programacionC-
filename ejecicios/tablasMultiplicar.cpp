#include <iostream>
#include <stdlib.h> //para usutlizar la funcion system pause

using namespace std;

int main () {
  int numero;

  do
  {
    /* code */
    cout<<"Digite un numero entero entre 1 y 10: "; cin>>numero;
  } while (/* condition */(numero<1)||(numero>10));

  for (int i=1; i<=20; i++)
  {
    /* code */
    cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
  }
  
  cout<<"\n\n";
  system("pause");
  return 0;
}