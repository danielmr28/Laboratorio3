#include "iostream"

using namespace std;

int main()
{
    int a, b, c;

    cout << " Ingrese 2 numeros " << endl;
    cin >> a;
    cin >> b;

    c= a%b; 

    if ((b<a) && (c==0)) {

            cout << " Es divisible ";
    }

    else {
        cout << " No es divisible ";
    }

    return 0;

}