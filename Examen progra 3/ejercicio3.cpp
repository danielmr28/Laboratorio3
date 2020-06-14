#include "iostream"

using namespace std;

int anobi (int tiempo)
{
    if (tiempo%4 ==0)
    {
        return true;
    }
    else if (tiempo%4 && tiempo%100 !=0)
    {
        return false;
    }
    
}
int main()
{
    int tiempo;
    cout << " Ingrese el año "<< endl;
    cin >> tiempo;
    cout << " El año es: "<< anobi(tiempo); 
}