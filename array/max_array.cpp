#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"enter the "<<i<<" element";
        cin>>arr[i];
    }

     for(int i=0; i<n; i++){
       
        cout<<arr[i]<<endl;
    }

    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[0]<arr[i]){
            max=arr[i];
        }
    }
    cout<<"the max element is :";

    cout<<max;

   int  sec=max;

   for(int i=0;i<n;i++){
    
   }


}