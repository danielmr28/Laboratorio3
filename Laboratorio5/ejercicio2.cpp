#include "iostream"
#include "ctime"
#include "chrono"

using namespace std;

int main ()
{
    time_t hora= time(0);
    tm * time = localtime (&hora);
    cout << " La hora actual es: "<< time -> tm_hour << ":"<< time -> tm_min << ":"<< time -> tm_sec++<< endl; 
}