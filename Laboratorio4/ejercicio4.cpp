#include "iostream"

using namespace std;

int main()
{
    string palabra;
    int longitud;
    cout<<"Ingrese la palabra: ";
    cin>>palabra;
    longitud = palabra.length();
    if (longitud > 10) {
        cout<<"La palabra tiene mas de 10 caracteres"<<endl;
    } else {
        cout<<"La palabra tiene menos de 10 caracteres"<<endl;
    }
    if (longitud%2 == 0) {
        cout<<"La longitud es par"<<endl;
    } else {
        cout<<"La longitud es impar"<<endl;
    }
}