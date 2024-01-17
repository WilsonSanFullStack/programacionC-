/*
escriba una plantilla de funcion llamada maximo() que devuelva el valor maximo de tres argumentos que se
trasmitan a la funcion cuando sea llamada.
supongamos que los tres argumentos seran del mismo tipo de datos.*/

#include <iostream>
#include <cstdlib>

using namespace std;

void pedirDatos ();
int maximo (int x, int y, int z);

int num, num2, num3;

int main() {
    // Your code here

  pedirDatos();
  cout<<"el valor maximo de: "<<num<<", "<<num2<<" y "<<num3<<" es: "<<maximo (num, num2, num3)<<endl;

      cin.get();
    //system("pause"); //esto no funciona en linux solo en windows o macos
    return EXIT_SUCCESS;
}

void pedirDatos () {
  cout<<"Digite un numero: ";
  cin>>num;
  cout<<"Digite un numero: ";
  cin>>num2;
  cout<<"Digite un numero: ";
  cin>>num3;
};

int maximo (int x, int y, int z) {
  int result;
  if (x > y && x > z)
  {
    result = x;
  }else if (y > z && y > x)
  {
    /* code */
    result = y;
  }else if (z > y && z > x)
  {
    /* code */
    result = z;
  }
   return result;
}