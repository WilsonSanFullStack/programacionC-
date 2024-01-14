//
#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {

  int numeros[5] = {1,2,3,4,5};
  int suma = 0;

  for (int i=0; i<=5; i++) {
    suma += numeros[i];
  }

  cout<<"\nLa suma es: " << suma<<endl;

  system("pause");

  return EXIT_SUCCESS;
}

/*
char letras1[] = {'a', 'b', 'c', 'd', 'e'};
char letras2[] = {'f', 'g', 'h', 'i', 'j'};
char letras2[10];
copiando elementos en array 
todo copiando elementos de letras1 a letras3 desde la posicion 0 a la pisicion 4
for (int i=0; i<5;i++) {
letras3[i] = letras1[i];
}
todo copiando letras2 a letras3 apartir de la pusicion numero 5
for (int i=5; i<10;i++) {
letras3[i] = letras2[i-5];
}

!asi el nuevo array seria 
?letras3['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j']

todo ahora matrices o tablas
int matrix[nfilas][ncolumnas]
int numero[2][2] = {{1,2}, {3,4}}
?se veria de la siguiente forma
?[
 ? 1, 2
 ? 3, 4
?]

*/