#include<stdio.h>

int hanoi(int peg1,int peg2,int peg3,int n){
    if(n<=0){
        printf("Not Possible");
    }
    else if(n==1){
        printf("Move disk from %c to %c\n",peg1,peg3);
    }
    else{
        hanoi(peg1,peg3,peg2,n-1);
        hanoi(peg1,peg2,peg3,1);
        hanoi(peg2,peg1,peg3,n-1);
    }
}
int main(){
    char peg1='p';
    char peg2='q';
    char peg3='r';
    int n;
    printf("Enter number of disk:\n");
    scanf("%d",&n);
    hanoi(peg1,peg2,peg3,n);
    return 0;
}