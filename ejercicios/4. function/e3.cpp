#include <iostream>
#include <cstdlib>

using namespace std;

void pedirDatos ();
void functionPow (int x, int y);

int num, num2;
int main() {
    // Your code here

  pedirDatos();
  functionPow(num, num2);

      cin.get();
    //system("pause"); //esto no funciona en linux solo en windows o macos
    return EXIT_SUCCESS;
}

void pedirDatos () {
  cout<<"Digite el valor de la base: ";
  cin>>num;
  cout<<"Digite el valor del exponente: ";
  cin>>num2;
};

void functionPow (int x, int y) {
long result=1;
  for (int i =  1; i < y; i++)
  {
    /* code */
    result *= x;
  }
  cout<<"El resultado de elevar: "<<x<<" a "<<y<<" es: "<<result<<endl;
}