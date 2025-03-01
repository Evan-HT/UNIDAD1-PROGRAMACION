#include "iostream"
using namespace std;

int main()
{  
    //problema 1.6 Construya un diagrama de flujo que calcule e imprima el numero de segundos  
    //que hay en un determinado numero de dias.  
    int DIAS;  
    float SEGUNDOS;  

    //Entrada de datos  
    cout<<" Escribe el número de días para calcular lo segundos "<< "\n";  
    cin >> DIAS;  

    //CALCULO  
    SEGUNDOS= DIAS*24*60*60;  

    //SE IMPRIME RESULTADOS  
    cout<<" En "<<DIAS<<" días, hay "<<SEGUNDOS<<" segundos"<<"\n";  
    cin>>DIAS;  
    return 0;  
}
