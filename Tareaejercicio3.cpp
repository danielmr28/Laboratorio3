#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float x1;
    float x2;

    int a;
    int b;
    int c;


    cout << " Este programa es para calcular la formula general \n ";

    cout << "Digite el valor de a ";
    cin >> a;

    cout << " Digite el valor de b ";

    cin >> b;

    cout << " Digite el valor de c ";

    cin >> c;
    
    x1 = (-b+(sqrt(pow(b,2)-4*a*c)))/(2*a);

    x2 = (-b-(sqrt(pow(b,2)-4*a*c)))/(2*a);

    cout << " El valor de x1 = " << x1 << endl;

    cout << " El valor de x2 = " << x2 << endl;

    return 0; 
}