#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]= {1,2,3,4,5};
    int n = 5;
    int k=2;
    k= k%n;
    reverse(arr,arr+n);
    reverse(arr,arr+k);
    reverse(arr+k, arr+n);

    //printing
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}