#include "iostream"

using namespace std;

int calculadoramcd(int nummayor, int nummenor, int residuo )
{
    do 
    {
        residuo = nummayor%nummenor;
        if (residuo !=0)
        {
            nummayor= nummenor;
            nummenor=residuo; 
        }
    }
  while (residuo !=0 );
    cout << " El MCD es: "<< nummenor<< endl; 
    return 0;
}

int main()
{
    int nummayor, nummenor, residuo;

    cout << " Ingrese el numero mayor: "<< endl;
    cin >> nummayor;
    cout << " Ingrese el numero menor: "<< endl;
    cin >> nummenor;

    cout << calculadoramcd(nummayor, nummenor, residuo);
}