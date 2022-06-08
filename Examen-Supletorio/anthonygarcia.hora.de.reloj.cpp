//================================================
//==> Nombre del programa: Tiempo transcurrido
//==> Archivo : hora.de.reloj.cpp
//==>Autor: Anthony Garcia
//==>Fecha de elaboración: 2022-06-08
//==>Fecha ultima actualización: 2022-06-08
//=================================================

#include<iostream>
using namespace std;

int main()
{
    int ag_hi,ag_mi,ag_si,ag_hf,ag_mf,ag_sf,ag_ht,ag_mt,ag_st;
    cout<<"//Programa que calcula el tiempo transcurrido entre dos horas\n";
	cout<<"//Ingrese la hora inicial: ";
	cin>>ag_hi;
	cout<<"//Ingrese el minuto inicial: ";
	cin>>ag_mi;
	cout<<"//Ingrese el segundo inicial: ";
	cin>>ag_si;
	cout<<"//Ingrese la hora inicial: ";
	cin>>ag_hf;
	cout<<"//Ingrese el minuto inicial: ";
	cin>>ag_mf;
	cout<<"//Ingrese el segundo inicial: ";
	cin>>ag_sf;
	if (ag_si > ag_sf)
    {
        ag_st = 60 + ag_sf - ag_si;
        ag_mf = ag_mf - 1;
    }
    else
    {
        ag_st = ag_sf - ag_si;

    }
    if (ag_mi > ag_mf)
    {
        ag_mt = 60 + ag_mf - ag_mi;
        ag_hf = ag_hf -1;
    }
    else
    {
        ag_mt = ag_mf - ag_mi;

    }
    ag_ht = ag_hf - ag_hi;

	cout<<"\nEl tiempo transcurrido en horas minutos y segundos es: \n";
    cout<<ag_ht;
    cout<<" horas ";
    cout<<ag_mt;
    cout<<" minutos ";
    cout<<ag_st;
    cout<<" segundos";
	ag_ht = ag_ht*3600;
	ag_mt = ag_mt*60;
	ag_st = ag_ht + ag_mt + ag_st;
	cout<<"\nEl tiempo transcurrido solo en segundos es: \n";
    cout<<ag_st;
    cout<<" segundos ";

    return 0;
}
