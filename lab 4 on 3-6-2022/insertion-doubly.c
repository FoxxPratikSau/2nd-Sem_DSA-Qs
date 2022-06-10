#include<stdio.h>
#include<stdlib.h>
 typedef struct node
{
    int data;
    struct node*next;
    struct node*prev;

} node;
/***INSERTING A NODE AT BEGINNING**/
node*insertbeg(node*head){
    node*newnode;
     newnode=(node*)malloc(sizeof(node));
        printf("enter Data");
        scanf("%d",&newnode->data);
        head->prev=newnode;
        newnode->next=head;
        newnode->prev=NULL;
        head=newnode;
        return head;
}
/***INSERT FROM END**/
node*insertend(node*temp){
    node*newnode;
     newnode=(node*)malloc(sizeof(node));
        printf("enter Data");
        scanf("%d",&newnode->data);
        temp->next=newnode;
        newnode->prev=temp;
        newnode->next=NULL;
        return newnode;

}
/***INSERT FROM ANY POSITION**/
void insertany(node*head, int p){
        node*newnode;
        newnode=(node*)malloc(sizeof(node));
        node*prev=NULL;
        int i=1;
        printf("enter Data");
        scanf("%d",&newnode->data);
        while(i<p){
            prev=head;
            head=head->next;
           i++;
        }
        prev->next=newnode;
        newnode->prev=prev;
        newnode->next=head;
        head->prev=newnode;
        

}



void printlist(node*head){
    while(head!=NULL){
        printf("%d",head->data);
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
printf("Linked list before any operations");    
printlist(head);
 int p;
    printf("Enter the position");
    scanf("%d",&p); 
    if(p<1&&p>count)  printf("Enter the valid position");
    else if(p==1) head=insertbeg(head);
    else if(p==(count+1)) insertend(temp);
    else insertany(head,p);
    printf("Linked list after Insetion at %d position",p);
    printlist(head);
return 0;
}