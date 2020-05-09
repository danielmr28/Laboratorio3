#include <iostream>

using namespace std;

int main()
{
    float Doritos= 0.75; 
    int cantidad;
    
    cout << " ¿Cuantos Doritos desea llevar? \n";

    cin >> cantidad;
    float preciototal= cantidad*Doritos; 

    cout << " El precio total es: \n ";

    cout << preciototal << endl;

    return 0;


}