#include<iostream>
using namespace std;

string decimaltobinary(int n){
    string s ="";
    while(n>0){
        s+=to_string(n%2); // this will append all the bit but in reverse order
        n = n/2;
    }
    reverse(s.begin(), s.end()); // reversing the string to get the correct binary representation
    return s;   
}

int main(){
    int n;
    cin>>n;
    cout<<decimaltobinary(n);
    return 0;
}
// Time Complexity: O(logn) 
// Space Complexity: O(1)