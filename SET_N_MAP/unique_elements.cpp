#include<bits/stdc++.h>
using namespace std;

//no of unique elements
int main(){
    vector<int>arr= {1,2,3,1,2,3};
    unordered_set<int>s;
    for(int i=0;i<arr.size();i++){
        s.insert(arr[i]);
    }
    cout<<s.size()<<endl;
}