#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *head=NULL,*temp,*newnode;

void create(int data){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL){
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
}

void display(){
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void insert_beg(int data){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    head=newnode;
}

void insert_end(int data){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}

void insert_pos(int data,int pos){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}

void delete_beg(){
    temp=head;
    head=head->next;
    free(temp);
}

void delete_end(){
    struct node *prevnode;
    temp=head;
    while(temp->next!=NULL){
        prevnode=temp;
        temp=temp->next;
    }
    if(temp==head){
        head=NULL;
    }
    else{
        prevnode->next=NULL;
    }
    free(temp);
}

void delete_pos(int pos){
    struct node *nextnode;
    temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
}

void reverse_list(){
    struct node *prevnode,*currentnode,*nextnode;
    prevnode=NULL;
    currentnode=nextnode=head;
    while(nextnode!=NULL){
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    head=prevnode;
}

int main(){
    create(10);
    create(20);
    create(30);
    create(40);
    create(50);
    display();
    printf("\n");
    insert_beg(5);
    display();
    printf("\n");
    insert_end(60);
    display();
    printf("\n");
    insert_pos(25,3);
    display();
    printf("\n");
    delete_beg();
    display();
    printf("\n");
    delete_end();
    display();
    printf("\n");
    delete_pos(3);
    display();
    printf("\n");
    reverse_list();
    display();
    return 0;
}



