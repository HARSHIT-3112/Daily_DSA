#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int hash[15]={0};
    for(int i=0; i<n; i++){
        hash[arr[i]]+= 1;
    }

    int q; 
    cout<<"Enter the number of queries: ";
    cin>>q;
    while(q--){
        int x;
        cout<<"Enter the element to be searched: ";
        cin>>x;

        cout<<hash[x]<<endl;
    }
    return 0;
    
}