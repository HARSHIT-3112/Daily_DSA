#include<iostream>
#include<vector>

using namespace std;

int fibonacci(int n , vector<int> &dp){
    if(n<=1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n] = fibonacci(n-1,dp) + fibonacci(n-2,dp);
}

int main(){
    int n ;
    cin>>n;
    vector<int> dp(n+1, -1); // dp array to store the fibonacci numbers
    cout<<fibonacci(n,dp);
    return fibonacci(n,dp);
}