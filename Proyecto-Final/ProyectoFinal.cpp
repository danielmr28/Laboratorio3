#include "iostream"
#include "conio.h"
const int longCad = 20;

using namespace std;
    struct costoporarticulo
    {
    char nombrearticulo [longCad + 1];
    int cantidad;
    float precio, costoporarticulo; 
    }articulo[100];

int cantidad_de_articulos(int n, struct costoporarticulo articulo[])
{
    for (int i = 0; i < n ; i++ )
    {
        fflush(stdin);
        cout << " Ingrese el nombre del articulo: "<< endl;
        cin >> articulo[i].nombrearticulo;
        cout << " Ingrese la cantidad a comprar "<< endl;       // se usa un ciclo for en esta funcion para ingresar la cantidad
        cin >> articulo[i].cantidad;                            // de productos puestos por el usuario.
        cout<< " Ingrese el precio del articulo:"<< endl;
        cin >> articulo[i].precio;
    }
}

int calcular_costo(int n, struct costoporarticulo articulo[])
{
    for (int i = 0; i < n ;  i++)
    {
        articulo[i].costoporarticulo = articulo[i].precio * articulo[i].cantidad; // La funcion se utiliza para calcular el precio 
    }                                                                             // de los productos.      
}
int mostrador(int n, struct costoporarticulo articulo[])
{
    for (int i = 0; i < n; i++)
    {
        cout << " La cantidad de "<< articulo[i].nombrearticulo; // esta funcion se utiliza para mostrar todos los datos de el producto
        cout << " es de: "<< articulo[i].cantidad<< endl;
        cout << " y el precio de cada una es de: "<< articulo[i].precio << endl;  
        cout<< " El costo final seria de: "<< articulo[i].costoporarticulo<< endl;
    }
}

int costo_total(int n, struct costoporarticulo articulo[])
{
    float y = 0;
    for (int i = 0; i < n; i++)
    {
        y = articulo[i].costoporarticulo + y;  // se suman todos los productos para mostrar el costo final
    }
    
    return y;
}
int main ()
{    
    int n; // Usamos la variable n para ingresar la cantidad de productos que se compraran
    cout << " Ingrese la cantidad de productos a comprar: "<< endl;
    cin >>n;

    struct costoporarticulo ticket[n];
    cantidad_de_articulos(n, articulo);  // Llamar a todas las funciones para mostrar el resultado
    calcular_costo(n, articulo);
    mostrador(n, articulo);
    costo_total(n, articulo);
    cout << "El precio total es de: "<< costo_total(n, articulo)<< endl;
    cout<<"Linea de prueba";
}




