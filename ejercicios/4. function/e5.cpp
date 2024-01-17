/*Escriba una plantilla de funcion llamada despliegue () que despliegue el valor del argumento
unico que se le transmite cuando es invocada la funcion*/

#include <iostream>
#include <cstdlib>

using namespace std;

template <class TIPOD >
void despliegue (TIPOD);

int main() {
    // Your code here

    int dato1 = 4;
    float dato2 = 15.67;
    double dato3 = 567.7890;
    char dato4[20] = "wilson";

    despliegue(dato1);
    despliegue(dato2);
    despliegue(dato3);
    despliegue(dato4);

      cin.get();
    //system("pause"); //esto no funciona en linux solo en windows o macos
    return EXIT_SUCCESS;
}

template <class TIPOD>
void despliegue (TIPOD dato) {
  cout<<"El dato es: "<<dato<<endl;
}