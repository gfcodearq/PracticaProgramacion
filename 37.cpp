#include <iostream>
using namespace std;

const int FIB_0 = 0;
const int FIB_1 = 1;

int main(int argc, char *argv[]) {	
	
	int n,aux1,aux2,total;
	aux1 =  FIB_0;
	aux2 = FIB_1;
	
	cout<<"Digite un numero por pantalla: "<<endl;
	cin>>n;
	for(int i=0;i<=n;i++){
		total =  aux1 + aux2;
		aux2 = aux1;
		aux1 = total;
		
		cout<<total<<" ";
	}		
	return 0;
}


//Desarrolle un programa que lea un numero N por teclado y calcule el n-esimo numero de la serie de
//Fibonacci. Los dos primeros numeros de esta serie son el cero y el uno, y a partir de estos, cada numero
//de la secuencia se calcula realizando la suma de los dos anteriores.

//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
