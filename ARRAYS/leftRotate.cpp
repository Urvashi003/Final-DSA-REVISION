#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] ={1,2,3,4,5};
    int n =5;
    // int temp = arr[0];
    // for(int i=0; i<n; i++){
    //     arr[i]= arr[i+1];
    // }
    // arr[n-1]= temp;

    // //printing
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    //K places left
    int k=2;
    k= k%n;
    
    // for(int i=0; i<k; i++){
    //     //o(n)
    //     temp[i]= arr[i];

    // }
    // for(int i=0; i<k; i++){
    //     arr[n-k+1]= temp[i];
    // }
    // for(int i=k; i<n; i++){
    //     arr[i-k]= arr[i];
    // }

    //  // //printing
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }.
   reverse(arr,arr+k);
   reverse(arr+k,arr+n);
    reverse(arr,arr+n);

   for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



}