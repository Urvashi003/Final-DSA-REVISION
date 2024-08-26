#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr= {3,4,5,1,2};
    int n =5;
    int cnt=0;
    for(int i=1;i<=n;i++){
       if(arr[i]<arr[i-1]){
        cnt++;
       }
    }
    if(arr[0]<arr[n-1]){
        cnt++;
    }
    if(cnt>1){
       cout<< "false";
    }
    else{
        cout<<"true";
    }
}