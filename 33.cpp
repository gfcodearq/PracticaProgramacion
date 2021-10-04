#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int contComa=0;	
	int contCaracteres=0;
	char miCadena;
	char coma=',';
	//char punto='.';
	
	cout<<"Escriba lo que desee: ";
	cin.get(miCadena);
	
	while (miCadena!='.')
	{
		contCaracteres++;
		if(miCadena==coma)
		{
		contComa++;
		}	
		cin.get(miCadena);
	}
	
		cout<<"La cantidad de comas es: "<<contComa<<endl;
		cout<<"La cantidad de caracteres es: "<<contCaracteres<<endl;
		
	return 0;
}

