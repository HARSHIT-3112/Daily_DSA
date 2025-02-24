#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){
    int min;
    for(int i=0; i<n-2; i++){
        min=i;
        for(int j=i; j<n-1; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;

    }
}




int main(){
    cout<<"Enter the number of elements: ";
    int n;

    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    selection_sort(arr,n);
    cout<<"The sorted array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}

