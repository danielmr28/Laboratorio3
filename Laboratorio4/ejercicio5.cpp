#include "iostream"

using namespace std;

int main()
{
    string palabra, letra1, letra2;
    int ultima, longitud;
    cout<< " Ingrese la palabra " << endl;
    cin >> palabra;
    longitud = palabra.length(); // Se mide la longitud de la palabra
    letra1 = palabra[0]; // Se obtiene la primera letra de la palabra
    ultima = longitud - 1; // Se resta la cantidad de letras con 1
    letra2 = palabra[ultima]; // Obtengo la letra final
    if (letra1 == letra2){

        cout << " Inicia y finaliza con la misma letra "<< endl;
    }

    else {
        cout<< " No inicia y finaliza con la misma letra " << endl;
    }

}