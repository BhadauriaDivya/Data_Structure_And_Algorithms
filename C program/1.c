#include<stdio.h>
#include<conio.h>

int SumofOdd(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2 != 0){
            sum+=arr[i];
    }
    }
    return sum;
}

int main(){
    int n;
    // int n=sizeof(arr)/sizeof(arr[0]);
    scanf("%d",&n);
    // int arr[]={1, 4, 6, 7, 10, 12, 11, 5};
    int arr[n];
    for(int i=0;i<=n;i++){
        scanf("%d",arr[i]);
    }
    int sum=SumofOdd(arr,n);
    printf("%d",sum);
}