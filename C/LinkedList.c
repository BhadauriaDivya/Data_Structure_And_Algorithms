#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 
typedef struct link{
    int info;
    struct link *next;
}node;

void createemptynode(node **head){
    *head=NULL;
}
void traverse(node *head){
    while(head!=NULL){
        printf("%d \n",head->info);
        head=head->next;
    }
    printf("\nexiting");
}

void insertatbeg (node **head,int item){
    node *ptr=(node*)malloc(sizeof(node));
    ptr->info=item;
    if(*head==NULL){
        *head=ptr;
        ptr->next=NULL;
    }
    else{
        ptr->next=*head;
        *head=ptr;
    }
}

int main(){
    node *head;    

    createemptynode(&head);

        insertatbeg(&head,5);
        insertatbeg(&head,15);
        insertatbeg(&head,25);
        insertatbeg(&head,35);

        traverse(head);
    return 0;
}