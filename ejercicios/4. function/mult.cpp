#include <iostream>
#include <cstdlib>

using namespace std;
void pedirDatos ();
void mult (float x, float y);

float num, num2;
int main() {
    // Your code here

  pedirDatos();
  mult(num, num2);

      cin.get();
    //system("pause"); //esto no funciona en linux solo en windows o macos
    return EXIT_SUCCESS;
}

void pedirDatos () {
  cout<<"Digite el valor del primer numero: ";
  cin>>num;
  cout<<"Digite el valor del segundo numero: ";
  cin>>num2;
};

void mult (float x, float y) {
  float result = x * y;
  cout<<"La multiplicacion entre: "<<x<<" y "<<y<<" es: "<<result<<endl;
}