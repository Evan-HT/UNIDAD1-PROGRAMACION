#include "iostream"
#include "string"
using namespace std;

int main()
{
    // Problema 1.3 Escribe un programa tal que dado como datos el nombre del dinosaurio
    // su peso y su longitud, expresado estos últimos en libras y pies respectivamente
    // Escriba el nombre del dinosaurio, su peso expresado en kilogramos y la longitud expresado en metros

    //Declaracion de variables
    string NOMBRE;
    float PESOLIBRAS, LONGITUDPIES;
    float PESOKILOS, LONGITUDMETROS;

    //Entrada de datos
    cout<<" Escribe el nombre del dinosaurio "<< "\n";
    cin>> NOMBRE;

    cout<<"Escribe el peso del dinosaurio en libras "<< "\n";
    cin>>PESOLIBRAS;

    cout<<"Escribe la longitud del dinosaurio en pies "<< "\n";
    cin>>LONGITUDPIES;

    //CALCULO
    PESOKILOS=PESOLIBRAS*0.453;
    LONGITUDMETROS=LONGITUDPIES*0.3047;

    //SE IMPRIME RESULTADOS
    cout<<" El peso en kilos del dinosaurio "<< NOMBRE<< " es "<<PESOKILOS<<"Kg y la longitud en metros es "<<LONGITUDMETROS<<"\n";
    
    return 0;
}
