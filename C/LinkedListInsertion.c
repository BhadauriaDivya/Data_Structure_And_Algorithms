#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 
typedef struct link{
    int info;
    struct link *next;
}node;

void traverse(node *head){
    while(head!=NULL){
        printf("%d \n",head->info);
        head=head->next;
    }
    // printf("\nexiting");
}

void inversetraverse(node *head){
    if(head->next!=NULL){
        inversetraverse(head->next);
    }
    printf("%d \n",head->info);
    // printf("\nexiting");
}
void insertatbeg (node **head,node **last,int item){
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
    *last=ptr;
}

void insertatend(node **start,node **last,int item){
    node *nn=(node*)malloc(sizeof(node));
    nn->info=item;
    
    nn->next = NULL;

    if(*start==NULL){
        *start=nn;
    }
    else{
        while((*last)->next!=NULL){
            (*last)=(*last)->next;
        }
        (*last)->next=nn;
    }
    *last=nn;
}

void insertatposition(node **start,int after,int item){
    node *nn=(node*)malloc(sizeof(node));
    nn->info=item;

    if(*start!=NULL){

    node *t=*start;

    for(int i=1;i<after-1;i++){
        t=t->next;
    }
    nn->next=t->next;
    t->next=nn;
    }
}

int main(){
    node *head=NULL, *last=NULL;
        insertatbeg(&head,&last,5);
        insertatbeg(&head,&last,15);
        insertatbeg(&head,&last,25);
        insertatbeg(&head,&last,35);

        insertatposition(&head,4,345432);

        insertatend(&head,&last,200);

        printf("Traverse\n");
        printf("\n");
        traverse(head);
        printf("\n");
        printf("Inverse Traverse\n");
        printf("\n");
       inversetraverse(head);
    return 0;
}