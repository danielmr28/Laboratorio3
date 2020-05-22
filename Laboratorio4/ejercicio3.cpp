#include "iostream"

using namespace std;

int main()
{
    int numero;

    cout << " Ingrese el numero " << endl;
    cin >> numero;

    if (numero > 0) 
    {
        cout << " El numero es positivo "<< endl;

    }

    else if (numero == 0){
        cout << " El numero es 0 ";
    }

    else {
        cout << " El numero es negativo "; 
    }
}