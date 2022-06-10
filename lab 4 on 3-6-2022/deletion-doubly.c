#include<stdio.h>
#include<stdlib.h>
 typedef struct node
{
    int data;
    struct node*next;
    struct node*prev;

} node;
/***DELETING FROM BEGINNING**/
node* deletebeg(node*head){
    node*temp;
    temp=head;
    head=head->next;
    free(temp);
    return head;
}
/***DELETING FROM END**/
void* deleteend(node*head){
    node*temp;
    temp=head->prev;
    temp->next=NULL;
    free(head);

}
/***DELETING FROM ANY POSITION**/
void deleteany(node*head, int p){
        node*prev=NULL;
        int i=1;
        while(i<p){
            prev=head;
            head=head->next;
           i++;
        }
        prev->next=head->next;
        head->next->prev=prev;
        free(head);
        

}



void printlist(node*head){
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
    
}
// void reverseprint(node*temp){
//     while(temp!=NULL){
//         printf("%d",temp->data);
//         temp=temp->prev;
//     }
// }
int main(){
    node*temp,*head,*newnode;
    newnode=temp=head=NULL;
    int count=0;

    int n=1;
    while(n){
        newnode=(node*)malloc(sizeof(node));
        printf("enter Data");
        scanf("%d",&newnode->data);
        newnode->prev=NULL;
        newnode->next=NULL;
            
        if(head==NULL){
            head=temp=newnode;
            count++;  
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
            count++;
        }
        printf("press 1 to continue and 0 to end:");
        scanf("%d",&n);

}
printlist(head);
    int p;
    printf("Enter the position");
    scanf("%d",&p); 
    if(p<1||p>count)  printf("Enter the valid position");
    else if(p==1) head=deletebeg(head);
    else if(p==count) deleteend(temp);
    else{
        deleteany(head,p);
    }
    printf("Linked list after Deletion");
    printlist(head);
return 0;
}