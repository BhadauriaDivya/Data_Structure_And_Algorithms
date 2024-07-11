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
    printf("\nexiting");
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

void deleatatbeg(node **head){
    if(*head==NULL){
        printf("List is Empty");
    }
    else{
        node *s=*head;
        *head=(*head)->next;
        free(s);
    }
}

void deleteatposition(node **start,int pos){
    node *t=*start,*p;
    for(int i=1;i<pos-1;i++){
        t=t->next;
    }
    p=t->next; 
    t->next = t->next->next;
    free(p);
}

void deleteatend(node **start){
    if(*start!=NULL){
        node *t=*start,*p;
        while(t->next->next!=NULL){
            t=t->next;
        }
    //p=(*start)->next;
    p=t->next;
    t->next=NULL;
    free(p);
    }
}

int main(){
    node *head=NULL, *last=NULL;
        insertatbeg(&head,&last,5);
        insertatbeg(&head,&last,15);
        insertatbeg(&head,&last,25);
        insertatbeg(&head,&last,35);
        insertatbeg(&head,&last,45);
        insertatbeg(&head,&last,55);
        insertatbeg(&head,&last,65);
        insertatbeg(&head,&last,75);
        insertatbeg(&head,&last,85);
        insertatbeg(&head,&last,95);
        insertatbeg(&head,&last,100);

        deleatatbeg(&head);
        deleteatposition(&head,4);
        deleteatend(&head);

        printf("Traverse\n");
        printf("\n");
        traverse(head);
    return 0;
}