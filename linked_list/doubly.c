#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head=NULL,*temp,*newnode;

void create(int data){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL){
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        newnode->prev=temp;
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
    newnode->prev=NULL;
    newnode->next=head;
    head->prev=newnode;
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
    newnode->prev=temp;
}


void insert_pos(int data,int pos){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
    newnode->prev=temp;
}

void delete_beg(){
    temp=head;
    head=head->next;
    head->prev=NULL;
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
    nextnode->next->prev=temp;
    free(nextnode);
}

void reverse_list(){
    struct node *currentnode,*temp;
    temp = currentnode=head;
    while(currentnode!=NULL){
        temp=currentnode->prev;
        currentnode->prev=currentnode->next;
        currentnode->next=temp;
        currentnode=currentnode->prev;
    }
    if(temp!=NULL){
        head=temp->prev;
    }
}

int main(){
    create(10);
    create(20);
    create(30);
    create(40);
    create(50);
    printf("Doubly Linked List: ");
    display();
    printf("\n");
    insert_beg(5);
    printf("Doubly Linked List after inserting at beginning: ");
    display();
    printf("\n");
    insert_end(60);
    printf("Doubly Linked List after inserting at end: ");
    display();
    printf("\n");
    insert_pos(25,3);
    printf("Doubly Linked List after inserting at position 3: ");
    display();
    printf("\n");
    delete_beg();
    printf("Doubly Linked List after deleting from beginning: ");
    display();
    printf("\n");
    delete_end();
    printf("Doubly Linked List after deleting from end: ");
    display();
    printf("\n");
    delete_pos(3);
    printf("Doubly Linked List after deleting from position 3: ");
    display();
    printf("\n");
    reverse_list();
    printf("Doubly Linked List after reversing: ");
    display();
    return 0;
}