#include <iostream>
#include<vector>
using namespace std;

int main(int argc, char *argv[]) {
	
	vector<int> twoSum = {4,7,10,3};
	vector<int> result;
	int target = 10;
	int sum;
	
	
	for(int i=0;i<twoSum.size()-1;i++){			
		for(int j=0;j<twoSum.size()-1;j++){
			sum = twoSum[j] + twoSum[i+1]; 	
			if(sum == target){				
				result.push_back(twoSum[j]);
				result.push_back(twoSum[i+1]);
			}			
		}
		i++;				
	}	
	
	for(int k=0;k<result.size();k++){
		cout<<result[k]<<endl;
	}
	
	return 0;
}



//	twoSum.push_back(5);
//	for(int i=0;i<twoSum.size();i++)
//	{
//		cout<<twoSum[i]<<endl;
//	}

//	for(int i=0;i<twoSum.size()-1;i++){			
//		for(int j=0;j<twoSum.size()-1;j++){
//			sum = twoSum[j] + twoSum[i+1]; 
//			if(target == sum){
//				result.push_back(twoSum[j]);
//				result.push_back(twoSum[i+1]);
//				for(int i=0;i<result.size();i++){
//					cout<<result[i];
//				}
//			}
//			else{
//				cout<<"no se encontro";
//			}
//		}
//		i++;				
//		
//	
//	}
//	
