#include "Cliente.cpp"
#include <iostream>
using namespace std;

main(){
	string nit, nombres, apellidos, direccion;
	int telefono;
	
	cout<<"Ingresar Nit: ";
	cin>>nit;
	cout<<"Ingresar Nombres: ";
	cin>>nombres;
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	
	//instancia de un objeto
	Cliente obj = Cliente(nombres, apellidos, direccion, telefono, nit);
	
	cout<<endl;
	cout<<endl;
	cout<<"***   ***  DATOS DE CLIENTE  ***   ***"<<endl;
	cout<<"Nombre: "<<obj.getNombres()<<" "<<obj.getApellidos()<<" "<<endl;
	cout<<"NIT: "<<obj.getNit()<<endl;
	cout<<"Direccion: "<<obj.getDireccion()<<endl;
	cout<<"Telefono: "<<obj.getTelefono()<<endl;
}