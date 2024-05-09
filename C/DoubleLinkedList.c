#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct link{
    int info;
    struct link *prev, *next;
}node;

void traverse(node *head){
    if(head==NULL){
        printf("List is empty");
        return;
    }
    else{
        while(head!=NULL){
        printf("%d \n",head->info);
        head=head->next;
        }
    }
    printf("\nexiting");
}

void insertatbeg(node **start, node **last,int item){
    node *nn=(node*)malloc(sizeof(node));
    nn->info=item;
    if(*start==NULL){
        nn->next=nn->prev=NULL;
        *last=*start=nn;
    }
    else{
        nn->next=*start;
        nn->prev=NULL;
        (*start)->prev=nn; 
        *start=nn;
    }
}

void insertatend(node **start,node **last,int item){
    node *nn=(node*)malloc(sizeof(node));
    nn->info=item;
    // node *t=*start;
  /* while(t->next!=NULL)
        t=t->next;*/
    if(*start!=NULL){
        nn->next=NULL;
        nn->prev=*last;
        (*last)->next=nn;
        *last=nn;
    }
    else{
        printf("List is empty");
    }
}

void deleteatbeg(node **start){
    node *t=*start;
    (t->next)->prev=NULL;
    *start=t->next;
    free(t);
} 

void deleteatend(node **start,node **last){
    node *t=*last;
    (t->prev)->next=NULL;
    free(t);
}

int main(){
node *start=NULL,*last=NULL;
            insertatbeg(&start,&last,5);
            insertatbeg(&start,&last,18);
            insertatbeg(&start,&last,23);

            insertatend(&start,&last,75);
            insertatend(&start,&last,43);
            insertatend(&start,&last,21);

            deleteatbeg(&start);
            deleteatend(&start,&last);
    traverse(start);
    return 0;
}