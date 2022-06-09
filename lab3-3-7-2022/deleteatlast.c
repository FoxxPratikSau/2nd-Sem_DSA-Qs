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
void delete_at_end(node*head){
    node*p;
    if(head==NULL) return;
    else if(head->next==NULL){
        p=head;
        head=NULL;
        free(p);
    }
    else{
        p=head;
        while(p->next->next!=NULL){
            p=p->next;
        }
        node* temp=p->next;
        p->next=NULL;
        free(temp);
    }

}
int main(){
    node*head,*temp,*newnode;
    head=NULL;
    int n;
    n=1;
    while(n){
        newnode=(node*)malloc(sizeof(node));
        if(head==NULL)
        {
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
    delete_at_end(head);
    printll(head);

}