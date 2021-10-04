#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	
	int n;	
	cout<<"Ingrese un numero: "<<endl;
	cin>>n;	
	
	if(n>1) // un numero primo es mayor que 1
	{
		if(n%n==0 && n%1==0)
		{						
			cout<<"Es verdadero"<<endl;
		}
		else 
	    {
			cout<<"No es primo"<<endl;
		}
	}
	else
	{
		cout<<"El numero tiene que ser mayor que 1"<<endl;
	}
		
	
	return 0;
}

//si es numero primo es true sino es false 
