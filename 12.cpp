#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int codigo;
	cout<<"Digite el codigo: "<<endl;
	cin>>codigo;
	if(codigo>0)
	{
	int provincia = codigo / 1000;
	int n_operacion = (codigo - (provincia * 1000)) / 10;
	cout<<"Provincia: "<<provincia<<endl;
	cout<<"Nº Operacion: "<<n_operacion<<endl;
	}
	else{
		cout<<"Ingreso un N° menor o igual a cero"<<endl;
	}
	return 0;
}

