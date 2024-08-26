#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr ={1,2,3,9,5};
    bool flag= true;
    for(int i=1;i<arr.size();i++){
        if(arr[i]<arr[i-1]){
            flag= false;
            break;
        }

    }
    if(flag){
        cout<<" sorted"<<endl;
    }else{
       cout<<" not sorted"<<endl;
    }
   
}