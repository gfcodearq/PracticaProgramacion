#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	const int TWELVE = 12; 
	int cont = 0; //count number equal 12
	int pos = -1; //define the position of twelve
	int UltimaPos;
	int PrimeraPos;
	int n; 
	
	cout<<"Digite un numero en pantalla: "<<endl;
	
	while(n!=0){
		cin>>n;	
		pos++;
		if(n==TWELVE){							
			cont++;
			UltimaPos = pos;
			if(cont == 1){
				PrimeraPos = pos;
			}
		}			
	}
	cout<<"La primera posicion es: "<<PrimeraPos<<endl;
	cout<<"La ultima posicion en donde aparece es: "<<UltimaPos<<endl;
	return 0;
}



//	Desarrolle un programa que lea una secuencia de nuumeros enteros terminada en 0, y que encuentre y
//	escriba en la pantalla la posicion de la primera y de la ultima ocurrencia del numero 12 dentro de la
//	secuencia. Si el numero 12 no esta en la secuencia, el programa debera escribir 0. Por ejemplo, si el
//	octavo numero de la lista es el unico 12, entonces 8 sera la primera y la ultima posicion de las ocurrencias
//	de 12.
