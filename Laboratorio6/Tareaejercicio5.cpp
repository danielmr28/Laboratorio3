#include "iostream"
using namespace std;

int main()
{

    int numeros [200];
    cout << "Estos son los primeros 100 numeros impares: "<< endl;
    
    for(int i = 200; i >= 0; i-- )
    {
        if (i % 2 !=0)
        {
            numeros[i] = i;
            cout << numeros[i] <<endl;

        }
    }

}