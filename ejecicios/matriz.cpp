#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {

  int numeros[100][100], filas, columnas;

  cout<<"Digite el numero de filas: ";
  cin>>filas;
  cout<<"Digite el numero de columnas: ";
  cin>>columnas;

  // almacenamos elementos en la matriz
  for (int f = 0; f < filas; f++)
  {
    for (int c = 0; c < columnas; c++) {
      cout<<"Digite un numero ["<<f<<"]["<<c<<"]";
      cin>>numeros[f][c];
    }
  }
  
  //mostrar la matriz

  for (int f = 0; f < filas; f++)
  {
    for (int c = 0; c < columnas; c++) {
      cout<<numeros[f][c]<<", ";
    }
    cout<<"\n";
  }


system("pause");

  return EXIT_SUCCESS;
}