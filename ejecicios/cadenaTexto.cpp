#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main () {
  char palabra[] = "wilson";
  char palabra1[] = {'w', 'i', 'l', 's', 'o', 'n', '1', '\0'}; // \0 para determinar que es un caracter nulo asi no se carga mas informacion
  char nombre[30];

  cout<<"Digite su nombre: ";
  //cin>>nombre; esto solo guarda hasta el primer espacio en blanco
  cin.getline(nombre,30,'\n');
  // cin.getline(nombre,30,'\n'); con esto puedo guardar exactamente los 30 caracteres nada mas
  
int logitud1 = strlen(palabra);
int logitud3 = strlen(nombre);
int logitud2 = strlen(palabra1);

cout<<palabra<<endl;
cout<<palabra1<<endl;
cout<<nombre<<endl;

cout<<"logitud palabra es: "<<logitud1<<" logitud palabra1 es: "<<logitud2<<" logitud nombre es: "<<logitud3<<endl;

system("pause");
  return EXIT_SUCCESS;
}