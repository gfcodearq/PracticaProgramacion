#include <iostream>
# include <iomanip>

using namespace std ;
int main ()
{
	cout << " Introduzca un numero : ";
	int num = 123456;
	cin >> num ;
	char c = '#';
	cin . get (c);
	cout << "El numero leido es: " << num << endl ;
	if (c < ' ') {
		cout << "El separador ( cod ASCII ) es: "
			<< int (c) << endl ;
	} else {
		cout << "El separador es: '"
			<< c << "'" << endl ;
	}
}
