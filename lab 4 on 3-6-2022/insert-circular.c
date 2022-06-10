#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*next;
}node;
/*****INSERTING A NODE AT BEGINING******/
node* insertbeg(node*head,node*temp){
    node*newnode;
    newnode=(node*)malloc(sizeof(node));
    int n;
    printf("Enter data you want to insert");
    scanf("%d",&newnode->data);
    newnode->next=head;
    temp->next=newnode;
    head=newnode;
    return head;
}
/*****INSERTING A NODE AT END******/
void insertend(node*head,node*temp){
    node*newnode;
    newnode=(node*)malloc(sizeof(node));
    int n;
    newnode->next=head;
    printf("Enter data you want to insert");
    scanf("%d",&newnode->data);
    temp->next=newnode;
    newnode->next=head;
}
/****INSERTING A NODE AT ANY POSITION****/
void insertany(node*head,int p){
    int i=1;
    node*newnode;
    newnode=(node*)malloc(sizeof(node));
    printf("Enter data you want to insert");
    scanf("%d",&newnode->data);
    while(i<p-1){
        head=head->next;
        i++;
    }
    newnode->next=head->next;
    head->next=newnode;
}
/*****PRINTTING A NODE******/
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
/*****MAIN FUNCTION******/
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
        printf("Enter data");
        scanf("%d",&temp->data);
        printf("Press 1 to continue and 0 to stop");
        scanf("%d",&n);

    }
    int p;
    printf("Enter the position");
    scanf("%d",&p);   
    if(p<1&&p>count)  {printf("Enter the valid position");
    printlist(head);}
    else if(p==1) {
        head=insertbeg(head,temp);
        printlist(head);
        printf("Linked list after inserting at first position\n");
    }

   else if(p==(count+1)) {
        insertend(head,temp);
        printf("Linked list after inserting at end position\n");
        printlist(head);
   }
   else{
    insertany(head,p);
    }
    printf("Linked list after inserting at %d position\n",p);
    printlist(head);

}