#include<iostream>
using namespace std;
int main(){
	string usuario,clave, contra,usu;
	usuario="sdmenos";
	clave="untels";
	do{
	cout<<"Ingrese su nombre de usuario: ";cin>>usu;
	cout<<endl;
	cout<<"Ingresa la clave: ";cin>>contra;
	cout<<endl;
	if(usu!=usuario || contra!=clave){
		cout<<"------------------------------------"<<endl;
		cout<<"El usuario o la clave es incorrecta"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<endl;
	}
	cout<<endl;
	}while(contra!=clave && usu!=usuario); 
	cout<<"****************"<<endl;
	cout<<"clave correcta"<<endl;
	cout<<"****************"<<endl;
	return 0;
}