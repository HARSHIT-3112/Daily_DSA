#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i=n-1; i>0; i--){
        int swap=0;
        cout<<i<<",";
        for(int j=0; j<=i-1; j++){

            cout<<j<<",";
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            if(swap==0){
                break;
            }
        }cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bubble_sort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}

