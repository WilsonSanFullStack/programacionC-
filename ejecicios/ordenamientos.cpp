#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {
  int numero[] = {5,4,8,9,7,6,2,1,3};
//? ordenamiento de burbuja
    cout<<"inicial: "<<endl;
  for (int i = 0; i < 9; i++)
  {
    /* code */
    cout<<numero[i]<<", ";
  }
  cout<<endl;
  int aux;
  for (int i = 0; i < 9; i++)
  {
    for (int x = 0; x < 9; x++)
    {
      if (numero[x] > numero[x+1]) {
        aux = numero[x];
        numero[x] = numero[x+1];
        numero[x+1] = aux;
      }
    }
  }
  
  cout<<"orden ascendente: "<<endl;
  for (int i = 0; i < 9; i++)
  {
    cout<<numero[i]<<", ";
  }
  cout<<endl;
  cout<<"orden desendente: "<<endl;
  for (int i = 8; i>=0; i--)
  {
    cout<<numero[i]<<", ";
  }
  cout<<endl<<endl;
  //todo fin del ordenamiento

  //?ordenamiento por insercion
int numeros[] = {50,40,80,90,70,60,20,10,30};
  int post, auxi;

  cout<<"inicial: "<<endl;
  for (int i = 0; i < 9; i++)
  {
    /* code */
    cout<<numeros[i]<<", ";
  }
  cout<<endl;

  for (int i = 0; i < 9; i++)
  {
    /* code */
    post = i;
    auxi = numeros[i];
    while ((post>0) && (numeros[post-1] > auxi))
    {
      /* code */
      numeros[post] = numeros[post - 1];
      post--;
    }
    numeros[post] = auxi;
  }
  
  cout<<"Insercion orden ascendente: "<<endl;
  for (int i = 0; i < 9; i++)
  {
    cout<<numeros[i]<<", ";
  }
  cout<<endl;
  cout<<"Insercion orden desendente: "<<endl;
  for (int i = 8; i>=0; i--)
  {
    cout<<numeros[i]<<", ";
  }
  cout<<endl<<endl;

  //todo fin del ordenamiento

  //?ordenamientos por seleccion

  int num[] = {55, 22, 99, 77, 11, 66, 44, 88, 33};

  cout<<"inicial: "<<endl;
  for (int i = 0; i < 9; i++)
  {
    /* code */
    cout<<num[i]<<", ";
  }
  cout<<endl;

for (int i = 0; i < 9; i++)
{
  int min = i;
  for (int a = i; a < 9; a++)
  {
    if (num[a] < num[min])
    {
      min = a;
    }
    
  }
  int auxiliar = num[i];
  num[i] = num[min];
  num[min] = auxiliar;
}
  cout<<"Seleccion orden ascendente: "<<endl;
  for (int i = 0; i < 9; i++)
  {
    cout<<num[i]<<", ";
  }
  cout<<endl;
  cout<<"Seleccion orden desendente: "<<endl;
  for (int i = 8; i>=0; i--)
  {
    cout<<num[i]<<", ";
  }
  cout<<endl;

  //todo fin del ordenamiento



  system("pause");
  return EXIT_SUCCESS;
}