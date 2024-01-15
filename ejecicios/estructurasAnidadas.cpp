#include <iostream>
#include <stdlib.h>
#include <limits> // Necesario para usar numeric_limits

using namespace std;
struct info_direccion {
  char direccion[30];
  char ciudad[20];
  char departamento[20];
};

struct empleado{
  char nombre[20];
  struct info_direccion dir_empreado;
  double salario;
}empleados[2];

int main() {

  for (int i = 0; i < 2; i++) {
    cout<<"Datos de Usuarios.\n";
    cout<<"*==============================*\n";
    // fflush(stdin); //! vaciar el buffer para asi poder hacer espacio para el nombre
    if (i>=1)
    {
      /* code */
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiar el búfer antes de leer el nombre
    }
    
    cout<<"Digite su nombre: ";
    cin.getline(empleados[i].nombre,20,'\n');
    cout<<"Digite su direccion: ";
    cin.getline(empleados[i].dir_empreado.direccion,30,'\n');
    cout<<"Digite su ciudad: ";
    cin.getline(empleados[i].dir_empreado.ciudad, 20, '\n');
    cout<<"Digite su departamento: ";
    cin.getline(empleados[i].dir_empreado.departamento, 20, '\n');
    cout<<"Digite su salario: ";
    cin>>empleados[i].salario;
    cout<<"\n";
  };
  
//? imprimiendo los datos
for (int i = 0; i < 2; i++)
{
  cout<<"Imprimo los Datos de Usuarios."<<endl;
    cout<<"*==============================*"<<endl;
  cout<<"Nombre: "<<empleados[i].nombre<<endl;
  cout<<"Direccion: "<<empleados[i].dir_empreado.direccion<<endl;
  cout<<"Ciudad: "<<empleados[i].dir_empreado.ciudad<<endl;
  cout<<"Departamento: "<<empleados[i].dir_empreado.departamento<<endl;
  cout<<"Salario: "<<empleados[i].salario;
  cout<<endl<<endl;
}

  system("pause");
  return EXIT_SUCCESS;
}