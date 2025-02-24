#include<stdio.h>
void merge(int arr[],int l, int mid, int h){
    int temp[20];
    int left=l;
    int right=mid+1;
    int k=l;

    while(left<=mid && right<=h){
        if(arr[left]<arr[right]){
          temp[k]=arr[left];  
          left++;
        }
        else{
            temp[k]=arr[right];
            right++;
        }
        k++;
    }
   
        while(right<=h){
            temp[k]=arr[right];
            right++;
            k++;
        }
    
        while(left<=mid){
            temp[k]=arr[left];
            left++;
            k++;
        }
    
    for(int i=l; i<=h; i++){
        arr[i]=temp[i];
}
}
//
void merge_sort(int arr[], int l, int h){
    int mid;
    if(l!=h){
        mid=(l+h)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
    
}

//
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
    merge_sort(arr,0,n-1);

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}