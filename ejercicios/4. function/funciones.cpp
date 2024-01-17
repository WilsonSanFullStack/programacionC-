#include <iostream>
#include <cstdlib>

using namespace std;

//prototype de function
int encontrarMaximo (int x, int y);

int main() {
    // Your code here
    int n1, n2, mayor;
    cout<<"Digite 2 numeros: ";
    cin>> n1 >> n2;

  mayor = encontrarMaximo(n1, n2);
  cout<<"El numero mayor es: "<<mayor<<" entre los numeros "<<n1<<" y "<<n2<<endl;
    system("pause");
    return EXIT_SUCCESS;
}
// definicion de funcion
int encontrarMaximo (int x, int y) {
  int numMax;
  if (x > y)
  {
    /* code */
    numMax = x;
  } else
  {
    /* code */
    numMax = y;
  }
  
  return numMax;
};
