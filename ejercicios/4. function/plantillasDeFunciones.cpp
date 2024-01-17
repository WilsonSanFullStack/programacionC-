#include <iostream>
#include <cstdlib>

using namespace std;

//plantilla de funcion para generar un tipo de funcion general
template <class TIPOD>
void mostrarAbs (TIPOD numero);

int main() {
    // Your code here

  int num1 = 4;
  float num2 = 94.58;
  double num3 = -5.1245568;

  mostrarAbs(num1);
  mostrarAbs(num2);
  mostrarAbs(num3);

    cin.get();
    // system("pause"); //esto no funciona en linux por lo tanto uso cin.get() para hacer que espere un enter
    return EXIT_SUCCESS;
}

template <class TIPOD>
void mostrarAbs (TIPOD numero){
if (numero < 0)
{
  /* code */
  numero *= -1;
}
cout<<"El valor adsoluto del numero es: "<<numero<<endl;
}