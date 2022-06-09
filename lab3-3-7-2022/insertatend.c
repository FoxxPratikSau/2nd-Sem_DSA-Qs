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
node* insertatlast(node* head){
    node*newnode;
    newnode=(node*)malloc(sizeof(node));
    printf("enter the element value:\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    //head=newnode;
    return newnode;

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
    temp->next=insertatlast(head);
    printll(head);

}