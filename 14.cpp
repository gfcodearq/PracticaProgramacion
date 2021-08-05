#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int n;
	cout<<"Ingrese la nota: "<<endl;
	cin>>n;
	if ( ! (( n >= 0.0) && ( n <= 10.0)))
	{
		cout<<"Error"<<endl;
	}
	else if(n == 10)
	{
		cout<<"Matricula de honor"<<endl;
	}		
	else if(n>=9)
	{
		cout<<"Sobresaliente"<<endl;
	}
	else if(n>=7)
	{
		cout<<"Notable"<<endl;
	}
	else if(n>=5)
	{
		cout<<"Aprobado"<<endl;
	}
	else 
	{
		cout<<"Suspenso"<<endl;
	}	
	return 0;
}

