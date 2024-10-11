//To implement Linear Search
#include<stdio.h>

int search(int arr[], int N, int x)
{
    for (int i=0; i<N; i++)
    {
        if (arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main(void)
{
    int arr[] = {2,3,4,5,6,7,8,9,10,20,30,40,50};
    int n = sizeof(arr) / sizeof(arr[0]);
    // int n;
    // scanf("%d",&n);
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    int result = search(arr, n, 30);
    if (result==-1){
            printf("Element is not present in array");
    }
    else{
        printf("Element is present at index %d", result);
        }
    return 0;
}