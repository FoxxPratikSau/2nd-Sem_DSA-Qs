#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*next;
}node;
/***TRAVERSELING THE LINKED LIST***/
void printll(node*head){
    printf("linked list:\n");
    while(head!=NULL){
        printf("%d",  head->data);
        head=head->next;

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
        {head=newnode;
        temp=newnode;
        temp->next=NULL;}

        else{
            temp->next=newnode;
            temp=temp->next;
            temp->next=NULL;
             
        }
        printf("Enter data");
        scanf("%d",&temp->data);
        printf("Press 1 to continue and 0 to stop");
        scanf("%d",&n);

    }
    
    printll(head);

}