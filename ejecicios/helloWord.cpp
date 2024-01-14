#include <iostream> /*entrada y salida de datos*/
#include <vector>
#include <string>

using namespace std; /* para simplificar el codigo utilizacion de estandar de c++*/

int main() //funcion principal
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    return 0;
}