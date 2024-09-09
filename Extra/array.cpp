#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[]={1,4,2,4};
    int n=4;
    int B[]= {3,5};
    int m=2;

    vector<int>final;
   
    // for(int i=0;i<m;i++){
    //      int cnt=0;
    //    for(int j=0;j<n;j++){
    //     if(A[j]<=B[i]) cnt++;
    //    }
    //    if(cnt){
    //      ans.push_back(cnt);
    //    }
       
    // }
    sort(A,A+n);
    sort(B,B+m);
   
     
     for (int i = 0; i < m; i++) {
        int s = 0;
        int e = n - 1;
        int cnt = 0;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (A[mid] <= B[i]) {
                cnt = mid - s + 1; // Count elements <= B[i]
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        final.push_back(s); // s will be the number of elements <= B[i]
    }

    
   
    for(auto x: final){
        cout<<x<<" ";
    }
return 0;
}