#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b,c,d,max;	
	cout<<"Ingrese un numero: "<<endl;
	cin>>a;
	cout<<"Ingrese un numero: "<<endl;
	cin>>b;
	cout<<"Ingrese un numero: "<<endl;
	cin>>c;
	cout<<"Ingrese un numero: "<<endl;
	cin>>d;	
	if(a>b)
	{
		max = a;
	}
	else 
	{
		max = b;
	}
	if(c>max)
	{
		max = c;
	}
	if(d>max)
	{
		max = d;
	}
	
	
	cout<<"El numero mas grande es: "<<max<<endl;
	return 0;
	
}

//Dise~ne un programa que lea de teclado cuatro numeros enteros y escriba en pantalla el mayor de los cuatro.
