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
void delete_at_anyposition(node*head){
    node*p;
    printf("Enter the position from you want to delete\n");
    int pos;
    scanf("%d",&pos);
    // for(int i=1;i<n;i++){
    //     p =head;
    //     head=head->next;
    // }
    // p->next=head->next;
    // free(head);
    if(head==NULL) return;
    else if(head->next==NULL){
        p=head;
        head=NULL;
        free(p);
    }
    else{
       int i=1;
       p=head;
       while(i<pos-1){
           p=p->next;
           i++;
       }
       node *temp=p->next;
       p->next=temp->next;
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
    delete_at_anyposition(head);
    printll(head);

}