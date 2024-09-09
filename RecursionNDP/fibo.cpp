#include<iostream>
#include<vector>
using namespace std;

int fibo(int n){
  if(n==0) return n;
  if(n==1) return n;

  int ans= fibo(n-1)+ fibo(n-2);
  return ans;
}

int solveMemo(int n, vector<int>&dp){
 dp[0]=0;
 dp[1]=1;
  if(dp[n] != -1) return dp[n];

  dp[n]= solveMemo(n-1,dp)+solveMemo(n-2,dp);
  return dp[n];

}

int solveTabu(int n){
    
    
   if(n==0 or n==1) return n;
    vector<int>dp(n+1,-1);
    if(n==0) return dp[0];
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]= dp[i-1]+dp[i-2];
    }
    return dp[n];
}

int spaceOpti(int n){
  if(n==0) return n;
  if(n==1) return n;

  int a=0;
  int b=1;
  int c=0;
  for(int i=2;i<=n;i++){
     c= a+b;
    a=b;
    b=c;
  }
  return c;
}

int main(){
  int n;
  cin>>n;
  vector<int>dp(n+1,-1);
  
  
//  cout<< fibo(n);
// cout<<solveMemo(n,dp);
// cout<<solveTabu(n);
cout<<spaceOpti(n);
 return 0;
}