#include<stdio.h>

int binarysearch(int arr[],int start,int end,int value){
    while(start<=end){    
    int mid=(start+end)/2;
        if(arr[mid]==value){
            return mid;
        }
        if(arr[mid]<value){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,3,4,5,6,7,8,9,10,20,30,40,50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int r=binarysearch(arr,0,n-1,20);
    if(r==-1){
        printf("Element is not present in array");
    }
    else{
        printf("Element is present at index %d",r);
    }
    return 0;
}