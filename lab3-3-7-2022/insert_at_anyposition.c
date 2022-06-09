#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*next;
}node;


void printll(node* head){
    printf("linked list:\n");
    while(head!=NULL){
        printf("%d ",  head->data);
        head=head->next;
    }
}


void insert_at_anyposition(node*temp){
    node *newnode;
    int i=1;
    newnode=(node*)malloc(sizeof(node));
    int p,n;
    printf("enter position and data with a space\n");
    scanf("%d %d",&p,&n);
    
    // printf("enter the data\n");
    // scanf("%d",&n);
    newnode->data=n;
    newnode->next=NULL;
    while(i<p-1){
        temp=temp->next;
        i++;    
    }
    newnode->next=temp->next;
    temp->next=newnode;
}

int main(){
    node*head,*temp,*newnode;
    head=NULL;
    int n;
    n=1;
    while(n){
        newnode=(node*)malloc(sizeof(node));
        if(head==NULL){
            head=newnode;
            temp=newnode;
            temp->next=NULL;
        }
        else{
            temp->next=newnode;
            temp=temp->next;
            temp->next=NULL;
             
        }
        printf("Enter data\n");
        scanf("%d",&temp->data);
        printf("Press 1 to continue and 0 to stop\n");
        scanf("%d",&n);

    }
    printll(head);
    insert_at_anyposition(head);
    printll(head);

}