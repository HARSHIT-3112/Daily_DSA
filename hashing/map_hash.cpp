#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<mpp[x]<<endl;
    }
    return 0;


}