#include <iostream>
#include <cstdlib>

using namespace std;

float multiplicar (float x, float y);

int main() {
    // Your code here

  float x, y;
  cout<<"Digite el valor del primer numero: "; cin>>x;
  cout<<"Digite el valor del segundo numero: "; cin>>y;
  
  multiplicar (x, y);
  cout<<"El resultado de muliplicar "<<x<<" y "<<y<<" es: "<<multiplicar(x, y)<<endl;

      cin.get();
    //system("pause"); //esto no funciona en linux solo en windows o macos
    return EXIT_SUCCESS;
}
float multiplicar (float x, float y) {
  float producto;
  producto = x * y;
  return producto;
}