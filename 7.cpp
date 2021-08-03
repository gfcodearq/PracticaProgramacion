#include <iostream>
using namespace std;
const float ValorEuro = 166.36; //constante del valor euro
int main(int argc, char *argv[]) {
	int euros;
	cout<<"Cuanto euros tiene: ";
	cin>>euros;
	int dinero = ValorEuro * euros;
	cout<<"Tiene "<<dinero<<" pesetas"<<endl;
	return 0;
}

/*Desarrolle un programa que lea de teclado una determinada cantidad de euros, calcule y escriba su equi-
valente en pesetas, considerando que 1C son 166.386 pts.*/
