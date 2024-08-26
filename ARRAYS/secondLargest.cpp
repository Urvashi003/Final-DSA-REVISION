#include<bits/stdc++.h>
using namespace std;

int main(){
    //largest
    int arr[] ={2,8,9,3,1};
    int n = 5;
    // int maxi = arr[0];
    // for(int i=0;i<n; i++){
    //     if(arr[i]>maxi){
    //         maxi=arr[i];
    //     }

    // }
    // cout<< maxi;
    // return 0;

    //second
    int maxi = arr[0];
    int sec= INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>maxi and arr[i]>sec){
           sec= maxi;
           maxi = arr[i]; 
        }
        else if(arr[i]>sec and arr[i]<maxi){
            sec= arr[i];
        }

    }
    cout<<sec<<endl;

}