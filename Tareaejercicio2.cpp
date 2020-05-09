#include <iostream>

using namespace std;

int main()
{
    float  pi= 3.14159;
    float diametro;
    int num1=2; 

    cout << " Calculemos el area y perimetro de un circulo, ingrese el valor del diametro ";

    cin >> diametro; 
    
    float perimetro= num1*diametro*pi;

    float divisiondeldiametro= diametro/num1;

    float area= pi*(divisiondeldiametro*divisiondeldiametro);

    cout << " El perimetro del ciculo es: " << perimetro << endl;

    cout << " El area del circulo es: " << area << endl;
    

    return 0;




}