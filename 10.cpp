#include <iostream>
#include<string>
using namespace std;

int main(int argc, char *argv[]) {
	cout << " Introduzca una letra minuscula : ";
	char letra_minuscula ;
	cin >> letra_minuscula ;
	char letra_mayuscula = char ( 'A' + ( letra_minuscula - 'a' ) );
	cout << letra_minuscula << " -> " << letra_mayuscula << endl ;
	return 0;
}

/*Desarrolle un programa que lea de teclado una letra min ´uscula (supondremos que la entrada de datos es
correcta), y escriba la letra may ´uscula correspondiente a la letra min ´uscula le ´ida previamente.*/
