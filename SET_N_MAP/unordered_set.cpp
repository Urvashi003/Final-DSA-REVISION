#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(3);
    // cout<<s.size()<<" ";
    s.erase(20);
    for(auto x: s){
        cout<<x<<" ";
    }
    if(s.find(10) != s.end()){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}