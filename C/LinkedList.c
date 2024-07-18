#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct link{
    int info;
    struct link *next;
}node;

void travese(node *head){
    while(head!=NULL){
        printf("%d\n",head->info);
        head=head->next;
    }
}

