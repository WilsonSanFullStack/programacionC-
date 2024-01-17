#include<iostream>
#include<stdlib.h>

using namespace std;

int main () {

  int numero, suma = 0;
  do
  {
    /* code */
    cout<<"Digite un numero: "; cin>>numero;
    if (numero>0)
    {
      /* code */
      suma += numero;
    }
    
  } while (((numero < 20) || (numero > 30)) && numero != 0);

 cout<<"\nLa suma es: " <<suma << endl; 

 system("pause");

 return EXIT_SUCCESS;
}