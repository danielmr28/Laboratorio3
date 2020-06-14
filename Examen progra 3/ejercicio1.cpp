#include "iostream"

using namespace std;


int  salario(int empleados) 
{
    int i = 1, hora_normal, hora_extra;
    double valor_descuentos, valor_real, afp, seguro_social, impuestosr;
    

    while (empleados >= i )
    {
    cout << " Ingrese la cantidad de horas trabajadas: " << endl;
    cin >> hora_normal;
    cout << " Ingrese la cantidad de horas extra si es que lo ha hecho: "<< endl;
    cin >> hora_extra;
    valor_real = (hora_normal * 1.75) + (hora_extra * 2.50);

    if ( valor_real < 500 )
    {
        afp = (valor_real * 0.0625);
        seguro_social = (valor_real * 0.04);
        valor_descuentos = valor_real - (afp + seguro_social);
    }
    else if ( valor_real >= 500)
    {
        afp = (valor_real * 0.0625);
        seguro_social = (valor_real * 0.04);  
        impuestosr = (valor_real * 0.1);
        valor_descuentos = valor_real - ( afp + seguro_social + impuestosr);
    }

    i= i + 1;
    cout << " El sueldo del trabajador es: "<< valor_descuentos<< endl;
    }

}

int main()
{
    int empleados;

    cout << " Ingrese el numero de empleados: "<< endl;
    cin >> empleados;
    salario(empleados);
}
    