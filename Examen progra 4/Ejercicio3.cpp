#include "iostream"
using namespace std;

void promedio(int estudiantes, float notas[][5])
{
    for (int a = 0; a < estudiantes; a++)
    {
        float promedio = 0;
        for (int b = 0; b < 5; b++)
        {
            promedio += notas[a][b] * 0.20;
        }
        if (promedio >= 6)
        {
            cout << " El estudiante tiene de nota final: " << promedio << " Ha aprobado " << endl;
        }
        else
        {
            cout << " El estudiante tiene de nota final: " << promedio << "Ha reprobado" << endl;
        }
    }
}
int matriz(int estudiantes, float notas[][5])
{
    for (int y = 0; y < estudiantes; y++)
    {
        cout << " Notas de alumnos: " << endl;
        for (int x = 0; x < 5; x++)
        {

            float nota;
            cout << " Ingrese las notas: " << endl;
            cin >> nota;
            if (nota >= 0 && nota <= 10)
            {
                notas[y][x] = nota;
            }
        }
    }
    promedio(estudiantes, notas);
}
int main()
{
    int estudiantes;
    cout << " Ingrese la cantidad de alumnos: " << endl;
    cin >> estudiantes;
    float notas[estudiantes][5];
    matriz(estudiantes, notas);
}