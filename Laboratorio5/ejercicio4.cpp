#include <iostream>
using namespace std;

int main() {

    int dia , mes, an;

    char p;

    cout << "Introduce la fecha en el siguiente orden (Dia,mes,ano)" << endl;
    cin >> dia >> p >> mes >> p >> an;

    if (dia <= 0 || mes > 12 || an < 0||dia>31)
    {
        cout << "Introduzca una fecha valida" << endl;
        cout << "Introduce la fecha en el siguiente orden (Dia,mes,ano)" << endl;
        cin >> dia >> p >> mes >> p >> an;

    }

     if (dia > 29 && an % 4 == 0 && mes == 2)
    {
        cout << "Introduzca una fecha valida" << endl;
        cout << "Introduce la fecha en el siguiente orden (Dia,mes,ano)" << endl;
        cin >> dia >> p >> mes >> p >> an;
    }

     if (dia > 28 && an % 4 != 0 && mes == 2)
     {
         cout << "Introduzca una fecha valida" << endl;
         cout << "Introduce la fecha en el siguiente orden (Dia,mes,ano)" << endl;
         cin >> dia >> p >> mes >> p >> an;
     }


     if (dia > 30 && mes == 4 || dia > 30 && mes == 6 || dia > 30 && mes == 9 || dia > 30 && mes == 11)
     {
         cout << "Introduzca una fecha valida" << endl;
         cout << "Introduce la fecha en el siguiente orden (Dia,mes,ano)" << endl;
         cin >> dia >> p >> mes >> p >> an;
     }

     // MESES QUE TIENE 30 DIAS


    if (dia == 30 && mes == 4 || dia == 30 && mes == 6 || dia == 30 && mes == 9 || dia == 30 && mes == 11)
    {
        cout << "\n\tLa fecha al siguiente dia sera: " << 1 << '/' << mes + 1 << '/' << an << endl;
    }

    else if ((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11) && dia < 30 )
    {
        cout << "\n\tLa fecha al siguiente dia sera: " << dia + 1 << '/' << mes << '/' << an << endl;
    }
    

    // MESES QUE TIENEN 31 DIAS


    else if ((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 10)|| (mes == 8) && dia < 31)

    {
        cout << "\n\tLa fecha al siguiente dia sera: " << dia + 1 << '/' << mes << '/' << an << endl;
    }


    else if (dia == 31 && mes == 12)
    {

        cout << "\n\tLa fecha al siguiente dia sera: " << 1 << '/' << 1 << '/' << an + 1 << endl;
    }


    else if ((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 10) || (mes==8) && dia == 31)
    {

        cout << "\n\tLa fecha al siguiente dia sera: " << 1 << '/' << mes + 1 << '/' << an << endl;
    }

    // Febrero con año bisiesto

    else if (dia < 29 && mes == 2 && an % 4 == 0)

    {
        cout << "\n\tLa fecha al siguiente dia sera: " << dia + 1 << '/' << mes << '/' << an << endl;
    }

    else if (dia == 29 && mes == 2 && an % 4 == 0)

    {

        cout << "\n\tLa fecha al siguiente dia sera: " << 1 << '/' << mes + 1 << '/' << an << endl;
    }
   

    else if (dia == 28 && mes == 2 && an % 4 != 0)
    {

        cout << "\n\tLa fecha al siguiente dia sera: " << 1 << '/' << mes + 1 << '/' << an << endl;
    }

    

    else if (dia == 28 && mes == 2 && an % 4 == 0)
    {
        cout << "\n\tLa fecha al siguiente dia sera: " << dia + 1 << '/' << mes << '/' << an << endl;
    }

    else if (dia < 28 && mes == 2 && an % 4 == 0 || an % 4 != 0)
    {
        
        cout << "\n\tLa fecha al siguiente dia sera: " << dia + 1 << '/' << mes << '/' << an << endl;
    }
    return 0;

}
