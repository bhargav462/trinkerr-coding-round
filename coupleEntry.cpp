#include <iostream>
#include <vector>
using namespace std;

long long coupleEntry(vector<int> arr)
{
    long long result = 0;
    
    for(int i = 0; i < arr.size(); ++i){
	    for(int j = i+1; j < arr.size(); ++j){
	        if(arr[i] == arr[j]){
	            result++;
	        }
	    }
	}
	
	return result;
}

int main() {
	vector<int> arr;
	int temp;
	
	while(cin >> temp){
	    arr.push_back(temp);
	}
	
	long long result = 0;
	
    result = coupleEntry(arr);
	
	cout<<result;
	
	return 0;
}
