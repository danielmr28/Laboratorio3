#include "iostream"

using namespace std;

int main()
{
    int numero;

    cout << "Ingrese el numero " << endl;
    cin >> numero;

    if (numero%2 == 0) 
    {
        cout << " El numero es par ";
    }

    else {
         cout << " El numero es impar" ;
        }
       
    return  0;
    

}