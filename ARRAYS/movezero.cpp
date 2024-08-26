#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] ={ 1,0,8,0,12};
    int n=5;
   int temp[n] = {0};
    int j=0;
    for(int i=0;i<n;i++){
      if(arr[i] != 0){
        temp[j]= arr[i];
        j++;
      }
    }
    for(int i=0;i<n;i++){
        arr[i]= temp[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}