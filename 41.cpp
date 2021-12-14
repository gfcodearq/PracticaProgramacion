#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char c1,c2,c3,c4;
	cin.get(c1);
	cin.get(c2);
	cin.get(c3);
	cin.get(c4);
	
	char n1 = char(c1+1);
	char n2 = char(c2+1);
	char n3 = char(c3+1);
	char n4 = char(c4+1);
	
	cout<<"La palabra original es: "<<c1<<c2<<c3<<c4<<endl;
	cout<<"La palabra modificada es: "<<n1<<n2<<n3<<n4<<endl;
	
	
	return 0;
}

