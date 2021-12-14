#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	char c1,c2,c3,c4;
	cin>> ws;
	cin.get(c1);
	cin.get(c2);
	cin.get(c3);
	cin.get(c4);	
	
	char n1 = char('A'+(c1 - 'a'));
	char n2 = char('A'+(c2 - 'a'));
	char n3 = char('A'+(c3 - 'a'));
	char n4 = char('A'+(c4 - 'a')); 
	
	
	cout<<"La palabra original es: "<<c1<<c2<<c3<<c4<<endl;
	cout<<"La palabra modificada es: "<<n1<<n2<<n3<<n4<<endl;
	
	
	return 0;
}
