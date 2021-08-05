#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double a,b,c;
	cout<<"Digite el primer numero: "<<endl;
	cin>>a;
	cout<<"Digite el segundo numero: "<<endl;
	cin>>b;
	cout<<"Digite el tercer numero: "<<endl;
	cin>>c;
	bool multiplicacion = (a * b == c);
	cout << a << " * " << b << " == " << c << " "<< boolalpha << multiplicacion << endl ;
//	if (a*b == c)
//	{
//		cout<<"true"<<endl;
//	}
//	else
//	{
//		cout<<"false"<<endl;
//	}
	return 0;
}

/*Desarrolle un programa que declare tres variables de tipo double (a, b y c). El programa debera leer
	tres numeros reales desde el teclado, y posteriormente escribira true si el resultado de multiplicar los dos
	primeros numeros es igual al tercero (a * b == c), y escribira false en caso contrario. Ejecute dicho
	programa introduciendo como datos de entrada los siguientes numeros y analice los resultados obtenidos.
	Los siguientes resultados han sido realizados en una maquina de 32 bits, en una maquina de 64 bits, el
	resultado de la ultima ejecucion es true (en vez de false como aparece en el enunciado).*/
