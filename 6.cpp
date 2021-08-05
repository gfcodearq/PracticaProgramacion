#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b,aux;
	cout<<"Digite un numero: "<<endl;
	cin>>a;
	cout<<"Digite otro numero: "<<endl;
	cin>>b;
	aux = a;
	a = b;
	aux = b;
	
	cout<<a<<endl;
	cout<<b<<endl;
	
	return 0;
}

