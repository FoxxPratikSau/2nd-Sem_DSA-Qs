#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*next;
}node;
void printlist(node*head){
    node*temp;
    temp=head;
    printf("linked list:\n");
    do{
        printf("%d  ",temp->data);
        temp=temp->next;
    }
    while (temp!=head);
    printf("\n");
}
/***DELETING FROM BEGINNING***/
node* deletebeg(node*head,node*temp){
    temp->next=head->next;
    head=head->next;
    return head;
}
/***DELETING FROM END***/
void deleteend(node*head,node*tail){
    node*temp;
    temp=head;
    while(temp->next!=tail){
        temp=temp->next;
    }
    temp->next=tail->next;
    free(tail);
}
/***DELETING AT ANY POSITION***/
void deleteany(node*head,int n){
    node*prev;
    for(int i=1;i<n;i++){
        prev =head;
        head=head->next;
    }
    prev->next=head->next;
    free(head);
}
/**MAIN FUNCTION**/
int main(){
    node*head,*temp,*newnode;
    head=NULL;
    int n,count;
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
        count++;
        printf("Enter data ");
        scanf("%d",&temp->data);
        printf("Press 1 to continue and 0 to stop ");
        scanf("%d",&n);

    }
    int p;
    printf("Enter the position ");
    scanf("%d",&p);   
    if(p<1&&p>count)  {printf("Enter the valid position");
    printlist(head);}
    else if(p==1) {
        head=deletebeg(head,temp);
        printf("Linked list after Deleting at first position\n");
        printlist(head);
        
    }

    else if(p==(count)) {
        deleteend(head,temp);
        printf("Linked list after deleting at end position\n");
        printlist(head);
    }
    else{
        deleteany(head,p);
    }
    printf("Linked list after deleting at %d position\n",p);
    printlist(head);
    return 0;
}
