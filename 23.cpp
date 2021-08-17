#include <iostream>
using namespace std;
const char Asterisco = '*';
int main(int argc, char *argv[]) {
	int n;
	cout<<"Ingrese un numero por teclado: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++) //desde que i es =o hasta i<n  - 0/1
	{
		for(int j=0;j<=i;j++) //desde j=0 hasta j < i - 0/1 siempre iguala a i entonces si es igual a 2 va a imprimir 3 veces antes de cerrar el bucle
		{
			if((i==0)|| (j==0) || (i == 1) || (i == n))
			{
				cout<<Asterisco;
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;		
	}		
	return 0;
}


/* Dise ~ne un programa que lea un n ´umero entero de teclado y escriba un tri ´angulo rect ´angulo (relleno) con
	tantos asteriscos (*) de base y altura como indique el n ´umero le ´ido. Por ejemplo, para un n ´umero le ´ido
	con valor 5, escribir ´a:
	*
	**
	* *
	*  *
	*****
*/
