#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]= {1,-2,3,4,5};
    int n=5;
    long long ans = arr[0];
    for(int i=0;i<n;i++){
        long long sum=0;
        for(int j=i; j<n;j++){
            sum= sum+arr[j];
            ans= max(sum,ans);
        }
    }
    cout<<ans<<endl;
}