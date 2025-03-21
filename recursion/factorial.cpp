#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
 
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)
// Input: 5
// Output: 120