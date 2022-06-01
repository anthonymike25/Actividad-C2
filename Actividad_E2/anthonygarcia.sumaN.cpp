//================================================
//==> Nombre del programa: suma de dos numeros
//==> Archivo : suman.cpp
//==>Autor: Anthony Garcia
//==>Fecha de elaboración: 2022-05-02
//==>Fecha ultima actualización: 2022-05-20
//=================================================

#include<iostream>
using namespace std;

int main()
{
  int ag_c=0,ag_n;
  float ag_x,ag_a=0;
  cout<<"Ingrese la cantidad de número a sumar:"; 
  cin>>ag_n;
  do{
	  cout<<"Ingrese el número : "; 
	  cin>>ag_x;
	  ag_c=ag_c+1;
	  ag_a=ag_a+ag_x;
  }while(ag_c<ag_n);


cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: suma de dos numeros"<<endl;
cout<<"//==> Archivo : suman.cpp"<<endl;
cout<<"//==>Autor: Anthony Garcia"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-02"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;



  cout<<"La suma de los "<<ag_n<<" números fue "<<ag_a<<endl;
  return 0;
 }
