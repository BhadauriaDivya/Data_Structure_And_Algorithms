#include<stdio.h>
#include <stdlib.h>

typedef struct Polynomial
{
    int coeff;
    int power;
    struct Polynomial* next;;
}poly;

void addpoly(poly **ptr,int coeff,int power){
    poly *temp=(poly *)malloc(sizeof(poly));
    temp->coeff=coeff;
    temp->power=power;
    temp->next=NULL;
    if(*ptr==NULL){
        *ptr=temp;
    }
    else{
        poly *last=*ptr;
        while(last->next){
            last=last->next;
        }
        last->next=temp;
    }
}
void printpoly(poly *ptr){
    while(ptr){
        printf("%dx^%d+",ptr->coeff,ptr->power);
        ptr=ptr->next;
    }
    printf("\n");
}

int main(){
    poly *head=NULL;
    addpoly(&head,3,2);
    addpoly(&head,2,1);
    addpoly(&head,1,0);
    printpoly(head);
    return 0;  
}