#include <iostream>
#include <stdlib.h>

using namespace std;

struct Etapas {
  int horas;
  int minutos;
  int segundos;
} et[100];


int main () {

  int nEtapas, horasT=0, minutosT=0, segundosT=0;
  cout<<"Digite el numero de etapas: "; cin>>nEtapas;

  for (int i = 0; i < nEtapas; i++)
  {
    /* code */
    cout<<"Horas: "; cin>>et[i].horas;
    cout<<"Minutos: "; cin>>et[i].minutos;
    cout<<"Segundos: "; cin>>et[i].segundos;
    horasT = horasT + et[i].horas;

    minutosT = minutosT + et[i].minutos;
    if (minutosT >= 60)
    {
      /* code */
      minutosT -= 60;
      horasT++;
    }

    segundosT = segundosT + et[i].segundos;
    if (segundosT >= 60)
    {
      /* code */
      segundosT -= 60;
      minutosT++;
    }
    cout<<endl<<endl;
  }
  cout<<"\nTiempo total empleado\n";
  cout<<"Horas: "<<horasT<<endl;
  cout<<"Minutos: "<<minutosT<<endl;
  cout<<"Segundos: "<<segundosT<<endl;

  system("pause");
  return EXIT_SUCCESS;
}