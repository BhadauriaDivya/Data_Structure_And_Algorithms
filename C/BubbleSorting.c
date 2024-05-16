#include<stdio.h>
#include<stdlib.h>

void bubble_shot(int arr[],int n){
    int i,j;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}

int main(){
    int arr[]={65,23,43,67,47,57,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubble_shot(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}