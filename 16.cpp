#include <iostream>
using namespace std;

const float gastos_fijos = 1;
const float precio1 = 0.50;
const float precio2 = 0.35;
const float precio3 = 0.25;

int main(int argc, char *argv[]) {
	
	float a,b,precio;
	cout<<"Digite el 1er numero: "<<endl;
	cin>>a;
	cout<<"Digite el 2do numero: "<<endl;
	cin>>b;
	float consumo = a - b;
	cout<<consumo<<endl;
	
	if(consumo<100)
	{
		precio = consumo * precio1;		
		cout<<"El precio es: "<<precio + gastos_fijos<<endl;
	}
	else if(consumo>=100 && consumo<=150)
	{
		precio = consumo * precio2;		
		cout<<"El precio es: "<<precio + gastos_fijos<<endl;
	}
	else if(consumo>150)
	{
		precio = consumo * precio3;
		cout<<"El precio es: "<<precio + gastos_fijos<<endl;
	}
	
	return 0;
}

/*El recibo de la electricidad se elabora de la siguiente forma para una determinada cantidad de Kw consumidos:
1C de gastos jos.
0.50C/Kw para los primeros 100 Kw consumidos.
8
0.35C/Kw para los siguientes 150 Kw consumidos.
0.25C/Kw para el resto de Kw consumidos.
Elabore un programa que lea de teclado dos numeros, que representan los dos ultimos valores del contador
de electricidad (al restarlos obtendremos el consumo en Kw) y calcule e imprima en pantalla el importe
total a pagar en funcion del consumo realizado.*/
