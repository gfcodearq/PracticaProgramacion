#include <iostream>
#include<vector>
using namespace std;

int main(int argc, char *argv[]) {
	
	vector<int> twoSum = {4,7,10,3};
	int target = 13;
	int sum;
	
	//cout<<twoSum.size();
	
	
		for(int i=0;i<twoSum.size()-1;i++){			
				for(int j=0;j<twoSum.size()-1;j++){
					sum = twoSum[j] + twoSum[i+1]; 
					cout<<sum<<endl;					
				}
				i++;				
			}
		
		
	

	
	
	
	
	
	return 0;
}

