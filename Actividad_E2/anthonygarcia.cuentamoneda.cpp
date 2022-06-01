//================================================
//==> Nombre del programa: cuenta moneda
//==> Archivo : cuentamoneda.cpp
//==>Autor: Anthony Garcia
//==>Fecha de elaboración: 2022-05-02
//==>Fecha ultima actualización: 2022-05-20
//=================================================

#include<iostream>
using namespace std;

int main()
{
  int ag_c=0,ag_c1=0,ag_c2=0,ag_n;
    float ag_x,ag_a=0,ag_a1=0,ag_a2=0;
    cout<<"ingresar n:";
    cin>>ag_n;
    do{
        cout<<"ingresar x:";
        cin>>ag_x;
        ag_c=ag_c+1;
        ag_a=ag_a+1;
        if(ag_x==0.10)
        {
            ag_c1=ag_c1+1;
            ag_a1=ag_a1+ag_x;
            
        }else{
            
            ag_c2=ag_c2+1;
            ag_a2=ag_a2+ag_x;
        }
        
        
    }while(ag_c<ag_n);

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: cuenta moneda"<<endl;
cout<<"//==> Archivo : cuentamoneda.cpp"<<endl;
cout<<"//==>Autor: Anthony Garcia"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-02"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;


    cout<<"dinero total: ";
    cout<<ag_a;
    cout<<"\ndinero total 0.1: ";
    cout<<ag_a1;
    cout<<"\ndinero total 0.25: ";
    cout<<ag_a2;
    
  return 0;
  
}
