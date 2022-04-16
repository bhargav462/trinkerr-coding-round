#include <bits/stdc++.h>
using namespace std;

string sortString(string str){
    string result = "";
    int arr[26] = {0};
    
    for(int i = 0; i < str.size(); ++i){
        arr[str[i]-'a']++;
    }
    
    for(int i = 0; i < 26; ++i){
        while(arr[i] > 0)
        {
            result += (i+'a');
            arr[i]--;
        }
    }
    
    return result;
}

vector<vector<string>> getAnagrams(vector<string> arr){
    
    unordered_map<string,vector<string>> map;
    
    for(int i = 0; i < arr.size(); ++i){
        string sortedString = sortString(arr[i]);

        map[sortedString].push_back(arr[i]);
    }
    
    vector<vector<string>> result;
    
    for(auto itr = map.begin(); itr != map.end(); ++itr){
        vector<string> temp;
        for(int i = 0; i < itr->second.size(); ++i)
        {
            temp.push_back(itr->second[i]);
        }
        result.push_back(itr->second);
    }
    
    return result;
}

int main() {
    vector<string> arr;
    string temp;
    
    while(cin>>temp){
        arr.push_back(temp);
    }
    
    vector<vector<string>> result = getAnagrams(arr);
    
    for(int i = 0; i < result.size(); ++i){
        for(int j = 0; j < result[i].size(); ++j){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    
	return 0;
}
