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
  
int logitud1 = strlen(palabra);//? logitud de cadenas de texto
int logitud3 = strlen(nombre);
int logitud2 = strlen(palabra1);

char copia[30];
strcpy(copia, nombre);//? copia de cadenas de texto
cout<<palabra<<endl;
cout<<palabra1<<endl;
cout<<nombre<<endl;
cout<<copia<<endl<<endl;
cout<<"logitud palabra es: "<<logitud1<<" logitud palabra1 es: "<<logitud2<<" logitud nombre es: "<<logitud3<<endl;

if (strcmp(nombre,copia) != 0) //strcmp(nombre,copia) para comprar array de string
{
  cout<<"son iguales"<<endl;
} else {
  cout<<"son diferentes"<<endl<<endl;
}

char concatenando[100];

strcpy(concatenando,palabra);//copiando lo que esta en palabra a concatenando
strcat(concatenando, nombre);//concatena 

cout<<concatenando<<endl<<endl;

// strrev(nombre); se supone que strrev revierte un string 
//strupr(nombre); se supone que strupr pone todo en mayusculas segun gpt no esta disponible en todos los compiladores y abria que crear la funcion
// strlwr(nombre); se supone que strlwr pone todo en minusculas 
int numero;
float flotante;
numero = atoi(nombre); //si escribo numeros como texto los paso a numeros 
flotante = atof(nombre);// si escribo numeros en texto los paso a float

cout<<numero<<endl;
cout<<flotante<<endl<<endl;
  //! hacemos el conteo de las vocales que se encuentras en la variable nombre
int a =0;
int e =0;
int i =0;
int o =0;
int u =0;

for (int x = 0; x < 30; x++)
{
  switch (nombre[x])
  {
  case 'a':
    a++;
    break;
  case 'e':
    e++;
    break;
  case 'i':
    i++;
    break;
  case 'o':
    o++;
    break;
  case 'u':
    u++;
    break;
  
  default:
    break;
  }
}

cout<<"A:"<<a<<", "<<"E:"<<e<<", "<<"I:"<<i<<", "<<"O:"<<o<<", "<<"U:"<<u<<"."<<endl<<endl;
  //! hacemos el conteo de las vocales que se encuentras en la variable nombre
system("pause");
  return EXIT_SUCCESS;
}