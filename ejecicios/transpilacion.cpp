#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {

  int numeros[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int transpilacion[3][3];

  //transpilamos la matriz
  for (int f = 0; f < 3; f++)
  {
    for (int c = 0; c < 3; c++)
    {
      transpilacion[f][c] = numeros[c][f];
    }
    
  }
  
  //mostramos la matriz copia
  for (int f = 0; f < 3; f++)
  {
    for (int c = 0; c < 3; c++)
    {
      cout<<transpilacion[f][c]<<", ";
    }
    cout<<"\n";
  }
  

  system("pause");


  return EXIT_SUCCESS;
}