#include<stdio.h>
int Q[10]; 
int F=-1;
int R=-1;

void enqueue(int value){
    if(R==9){
        printf("Queue is Full");
    }
    else{
        if(F==-1){
            F=0;
        }
        R++;
        Q[R]=value;
    }
}

void display(){
    if(R==-1){
        printf("Empty Queue");
    }
    else{
        printf("Queue:\n");
        for(int i=F;i<=R;i++){
            printf("%d\n",Q[i]);
        }
        printf("\n");
    }
}

int main(){
    enqueue(23);
    enqueue(43);
    enqueue(25);
    enqueue(67);
    display();
    return 0;
}