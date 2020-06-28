#include <iostream>
using namespace std;

float promedio(float estaturas[])
{
    int i;
    float sumaprom, prom;
    for ( i = 0 ; i < 25 ; i++ )
    {
        sumaprom = estaturas[i] + sumaprom;
    }
    prom = sumaprom / 25;
    return prom;
}

void funcion(float estaturas[], float prom)
{
    int x = 0, n = 0, i;
    for (i = 0 ; i < 25 ; i++)
    {
        if (estaturas[i] < prom )
        {
            n++;
        }
        else
        {
            x++; 
        }
    }
    cout << " Las estaturas menores al promedio son: " << n << "Las estaturas mayores al promedio son: "<< x;
}

int main()
{
    int i;
    float estaturas[25], prom;
    for (i = 0; i < 25; i++)
    {
        cout << "Ingrese las estatura "<<i<<": ";
        cin >> estaturas[i];
    }
    prom = promedio(estaturas); 
    cout<<"El promedio de las estaturas es: "<< prom <<" m"<<endl;
    funcion(estaturas, prom);
}
