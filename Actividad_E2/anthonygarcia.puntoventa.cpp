//================================================
//==> Nombre del programa: punto venta
//==> Archivo : puntoventa.cpp
//==>Autor: Anthony Garcia
//==>Fecha de elaboración: 2022-05-02
//==>Fecha ultima actualización: 2022-05-20
//=================================================

#include<iostream>
using namespace std;

int main()
{
  float ag_x,ag_N,ag_iva,ag_vf,ag_c=0,ag_a=0,ag_desc,ag_vb,ag_vdes,ag_vb2,ag_viva;
	cout<<"ingrese el numero de productos,valor del iva y del descuento separados por un espacio:"; cin>>ag_N>>ag_iva>>ag_desc;
	do{	
		cout<<"ingresar el precio del producto: ";cin>>ag_x;
		ag_c=ag_c+1;
		ag_a=ag_a+ag_x;
		
	}while(ag_c<ag_N);
	
	   ag_vb=ag_a;
	   ag_vdes=ag_vb*ag_desc/100;
	   ag_vb2=ag_vb-ag_vdes;
	   ag_viva=ag_vb*ag_iva/100;
	   ag_vf=ag_vb2+ag_viva;


cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: punto venta"<<endl;
cout<<"//==> Archivo : puntoventa.cpp"<<endl;
cout<<"//==>Autor: Anthony Garcia"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-02"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;



  cout<<"El valor a pagar es: "<<ag_vf<<endl;
	   cout<<"Tuvo un iva de: "<<ag_viva<<endl;
       cout<<"Y con el descuento de : "<<ag_vdes;
  return 0;
  }
