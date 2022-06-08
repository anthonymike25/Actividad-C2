//================================================
//==> Nombre del programa: Mayor de 4 numeros
//==> Archivo : Mayor.4numeros.cpp
//==>Autor: Anthony Garcia
//==>Fecha de elaboración: 2022-06-08
//==>Fecha ultima actualización: 2022-06-08
//=================================================

#include<iostream>
using namespace std;

int main()
{
    float ag_a,ag_b1,ag_b2,ag_b3,ag_b4;
    int i;
    ag_b1 = 0;
    ag_b2 = 0;
    ag_b3 = 0; 
    ag_b4 = 0;
    cout<<"Programa que calcula el mayor de 4 numeros en forma descendente\n";
    for(i = 1 ; i <= 4 ; i++)
    {
        cout<<"Ingrese el valor numero";
        cout<<i;
        cout<<": ";
        cin>>ag_a;
        if (ag_a > ag_b1)
        {
            ag_b4 = ag_b3;
            ag_b3 = ag_b2;
            ag_b2 = ag_b1;
            ag_b1 = ag_a;
        }
        else
        {
            if (ag_a > ag_b2)
            {
                ag_b4 = ag_b3;
                ag_b3 = ag_b2;
                ag_b2 = ag_a;
            }
            else
            {
                if (ag_a > ag_b3)
                {
                    ag_b4 = ag_b3;
                    ag_b3 = ag_a;
                }
                else
                {
                    ag_b4 = ag_a;
                }
            }
        }
    }
    cout<<"Los numeros quedan ordenados de la siguiente manera de mayor a menor: \n";
    cout<<ag_b1;
    cout<<"\n";
    cout<<ag_b2;
    cout<<"\n";
    cout<<ag_b3;
    cout<<"\n";
    cout<<ag_b4;
    return 0;
}
