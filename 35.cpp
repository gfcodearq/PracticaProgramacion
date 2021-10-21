#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,aux;
	int menor = 0;
	int mayor = 0;
	int aux2 = 0; 
	int media;
	
	cout<<"Digite un numero: "<<endl;	
	cin>>n;
	mayor = n; 
	menor = n;
	
	for(int i=0;i<n-1;i++){
		cin>>aux;
		if(mayor < aux){ //if major is less than aux
			mayor = aux;
		}
		if(menor > aux){ //if n minor greate than aux
			menor = aux;
		}	
		aux2+=aux;
	}		
	
	media = (aux2 + n)/n; 
	
	cout<<"El menor es: "<<menor<<endl;
	cout<<"El mayor es: "<<mayor<<endl; 	
	cout<<"La media es: "<<media<<endl;
	
	
	return 0;
}

//Desarrolle un programa que encuentre el mayor, el menor y la media aritmetica de una coleccion de N
