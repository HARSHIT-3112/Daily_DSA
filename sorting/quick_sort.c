#include<stdio.h>

int partition(int arr[],int l , int h){
    int pivot=arr[l];
    int i=l;
    int j=h;

    while(i<j){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[l];
    arr[l]=arr[j];
    arr[j]=temp;
    return j;

}

void quick_sort(int arr[],int l, int h){
    int j;
    if(l<h){
        j=partition(arr,l,h);
        quick_sort(arr,l,j-1);
        quick_sort(arr,j+1,h);
    }
}

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    quick_sort(arr,0,n-1);

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}