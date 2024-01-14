#include <iostream>

using namespace std;

int main () {

  float practica, teorica, participacion, result = 0;

  cout<<"Digite la nota de practica: "; cin>>practica;
  cout<<"Digite la nota de teorica: "; cin>>teorica;
  cout<<"Digite la nota de participacion: "; cin>>participacion;

  practica *= 0.30;
  teorica *= 0.60;
  participacion *= 0.10;

  result = practica + teorica + participacion;

  cout<<"\nLa nota final es: " <<result;


  return 0;
}