#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int binarySearch(vector<int> arr, int l, int r, int x){
    if(r>=l){
        int mid = l + (r-l)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]>x){
            return binarySearch(arr, l, mid-1, x);
        }
        return binarySearch(arr, mid+1, r, x);
    }
    return -1;
}

int main(){
    vector<int> arr ;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(10);
    int x = 10;
    int n = arr.size();
    int result = binarySearch(arr, 0, n-1, x);
    if(result==-1){
        cout<<"Element not found";
    }else{
        cout<<"Element found at index: "<<result;
    }
    return 0;
}