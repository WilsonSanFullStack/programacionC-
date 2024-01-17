#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

void pedirDatos ();
void cuadrado (int x);

int num;


int main() {
    // Your code here

  pedirDatos();
  cuadrado (num);

      cin.get();
    //system("pause"); //esto no funciona en linux solo en windows o macos
    return EXIT_SUCCESS;
}

void pedirDatos () {
  cout<<"Digite el numero a elevar: ";
  cin>>num;
};

void cuadrado (int x) {
  long result = 1;
  for (int i = 1; i <= 2; i++)
  {
    /* code */
    result *= x;
  }
  

  cout<<"El resultado de elevar: "<<x<<" al cuadrado es: "<<result<<endl;
}