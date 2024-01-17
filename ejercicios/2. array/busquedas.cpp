#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {

  int num[] = {5,4,8,9,7,6,2,1,3};
  int dato;
  char bandera = 'F';

  dato = 2;
  //? busqueda secuencial
  int i = 0;

  while ((bandera == 'F') && (i < 9)){
    /* code */
    if (num[i] == dato){
      /* code */
      bandera = 'V';
    }
    i++;
  }
  
  if (bandera == 'F') {
    cout<<"El numero "<<dato<<" no existe en el array";
  }
  else if (bandera == 'V'){
    cout<<"El numero "<<dato<<" se encuentra en la posicion: "<<i-1<<endl<<endl;
  }

  // tipo char
  char letras[] = {'a','e','i','o','u','w','i','l','s'};
  char letra;
  char banderas = 'F';

  letra = 's';
  //? busqueda secuencial
  int t = 0;

  while ((banderas == 'F') && (t < 9)){
    /* code */
    if (letras[t] == letra){
      /* code */
      banderas = 'V';
    }
    t++;
  }
  
  if (banderas == 'F') {
    cout<<"La letra"<<letra<<" no existe en el array";
  }
  else if (banderas == 'V'){
    cout<<"La letra "<<letra<<" se encuentra en la posicion: "<<t-1<<endl<<endl;
  }

  //busqueda binaria
  cout<<"BUSQUEDA BINARIA"<<endl;
  cout<<"*======================*"<<endl;
  int numeros[] = {1,2,3,4,5,6,7,8,9};
  int inf, sup, mitad, bus;
  char ban = 'F';

  bus = 7;
  //? busqueda binaria
  inf = 0;
  sup = 9;
  while (inf <= sup)
  {
    mitad = (inf+sup)/2;

    if (numeros[mitad] == bus)
    {
      /* code */
      ban = 'V';
      break;
    }
    if (numeros[mitad] > bus)
    {
      /* code */
      sup = mitad;
      mitad = (inf+sup)/2;
    }
    if (numeros[mitad] < bus)
    {
      /* code */
      inf = mitad;
      mitad = (inf+sup)/2;
    }
    
  }
  if (ban == 'V')
  {
    /* code */
    cout<<"El numero "<<bus<<" esta en la posision: "<<mitad<<endl;
  }
  else
  {
    /* code */
    cout<<"No se encontro el numero "<<bus<<endl;
  }
  
  

  system("pause");
  return EXIT_SUCCESS;
}