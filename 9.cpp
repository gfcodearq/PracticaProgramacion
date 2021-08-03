#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int a;	
	cout<<"Ingrese un numero: "<<endl;
	cin>>a;
	bool isPar = (a % 2 == 0);
	cout<<boolalpha<<isPar<<endl;
	
	return 0;
}

/*Desarrolle un programa que lea de teclado un n ´umero entero, y escriba true si el n ´umero le ´ido es par, y
false en caso contrario.*/
