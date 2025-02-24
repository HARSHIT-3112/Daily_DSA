#include<stdio.h>
#include<stdlib.h>

void selection_sort(int arr[],int n){
    
    for(int i=0; i<n-1; i++){
         int min=i;
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
    printf("Enter the number of elements: ");
    int n;

    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){

        scanf("%d",&arr[i]);
    }

    selection_sort(arr,n);
    
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;

}
