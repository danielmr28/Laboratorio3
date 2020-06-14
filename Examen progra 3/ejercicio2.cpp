#include "iostream"

using namespace std;
 
int juego()
{
    int numero, intentos = 1, numero_secreto = 9; 
    string e, x;

    cout << " Inicie el juego apretando la tecla e "<< endl<< " Puedes salir cuando quieras apretando la tecla x" << endl;
    cin >> e;

    while (intentos <= 5)
    {
        if( e == "e")
        {
            cout << " Ingrese el numero: "<<endl;
            cin >> numero; 
        if (numero >= 1 && numero < numero_secreto)
        {
            cout << " El numero secreto es mayor al numero puesto" << endl;
        }
        else if (numero > numero_secreto && numero <= 100)
        {
            cout << " El numero secreto es menor al numero puesto" << endl;
        }
        else if ( numero == numero_secreto)
        {
            cout << " Adivinaste el numero secreto, Felicidades!"<< endl;
            break;
        }
        else
        {
            break;
        }
        }
      intentos = intentos + 1;  
    }
}

 int main()
 {
    cout << " En este juego debes de adivinar el numero secreto, tienes 5 intentos" << endl;
    juego();
 }