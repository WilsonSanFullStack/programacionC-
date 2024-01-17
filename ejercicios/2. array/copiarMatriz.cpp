#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {

  int numeros[2][2] = {{1, 2}, {3, 4}};
  int copia[2][2];

  //copiando la matriz numeros 
  for (int f = 0; f < 2; f++)
  {
    for (int c = 0; c < 2; c++)
    {
      copia[f][c] = numeros[f][c];
    }
    
  }
  
  //mostramos la matriz copia
  for (int f = 0; f < 2; f++)
  {
    for (int c = 0; c < 2; c++)
    {
      cout<<copia[f][c]<<", ";
    }
    cout<<"\n";
  }
  

  system("pause");


  return EXIT_SUCCESS;
}