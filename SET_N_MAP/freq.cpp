#include<bits/stdc++.h>
using namespace std;

//freq of each ele
int main(){
int arr[]= {1,1,1,2,2,2,3,3};
int n= 8;
unordered_map<int,int>mp;

for(int i=0;i<n;i++){
    mp[arr[i]]++;
}
for(auto it: mp){
    
    cout<<it.first<<" ->"<< it.second<<endl;
}

}
