#include <iostream>
using namespace std;
const char ASTERISCO = '*';

int main(int argc, char *argv[]) {
	int n;
	cout<<"Digite un numero"<<endl;
	cin>>n;
	
	for (int j = 0; j < n; ++j) {
		for (int i = 0; i < n-j-1; ++i) { 
			cout << " ";
		}
		for (int i = 0; i < 2*j+1; ++i) {	
			if((j==0)||(j==n-1)||(i==0)||(i==2*j))
			{
			cout <<ASTERISCO;
			}
		}
		cout << endl ;
	}
	
	return 0;
}
	
