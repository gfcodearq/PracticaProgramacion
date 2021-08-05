#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double a,b,c;
	cout<<"Digite el primer numero: "<<endl;
	cin>>a;
	cout<<"Digite el segundo numero: "<<endl;
	cin>>b;
	cout<<"Digite el tercer numero: "<<endl;
	cin>>c;
	bool multiplicacion = (a * b == c);
	cout << a << " * " << b << " == " << c << " "<< boolalpha << multiplicacion << endl ; //boolalpha pone true o false en pantalla
	//	if (a*b == c)
	//	{
	//		cout<<"true"<<endl;
	//	}
	//	else
	//	{
	//		cout<<"false"<<endl;
	//	}
	return 0;
}
