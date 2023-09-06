#include<iostream>
using namespace std;
int main(){
	int a;
	do{
		cout<<"Ingresa un numero par negativo: ";cin>>a;
	}while(a>=0 || a%2!=0); cout<<"Correcto bienvenido";
	return 0;
}