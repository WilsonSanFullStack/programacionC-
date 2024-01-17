#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

  struct Persona
  {
    char nombre[20];
    int edad;
  }
  persona1 = {"wilson sanchez", 29},
  persona2 = {"daniela castro", 26},
  persona3;

int main () {
  cout<<"Persona 1"<<endl;
  cout<<"*====================*"<<endl;
  cout<<"Nombre: "<<persona1.nombre<<endl;
  cout<<"Edad: "<<persona1.edad<<endl<<endl;
  cout<<"Persona 2"<<endl;
  cout<<"*====================*"<<endl;
  cout<<"Nombre: "<<persona2.nombre<<endl;
  cout<<"Edad: "<<persona2.edad<<endl;
  
  cout<<"Pidiendo datos"<<endl;
  cout<<"*====================*"<<endl;
  cout<<"Ingrese su nombre: "<<endl;
  cin.getline(persona3.nombre, 20, '\n');
  cout<<"Ingrese su edad: "<<endl;
  cin>>persona3.edad;

  cout<<"\nPersona datos recolectados"<<endl;
  cout<<"*===============================*"<<endl;
cout<<"Nombre: "<<persona3.nombre<<endl;
  cout<<"Edad: "<<persona3.edad<<endl;




  system("pause");
  return EXIT_SUCCESS;
}