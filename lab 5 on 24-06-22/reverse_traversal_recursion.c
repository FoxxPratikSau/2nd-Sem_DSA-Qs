#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int price;
    char bookID[100];
    struct node*next;
}node;
node*head;
/***TRAVERSELING THE LINKED LIST***/
void printll(node*head){
    node*temp;
    temp=head;
    printf("linked list:\n");
    do{
        printf("%d\t %s\t\n",temp->price, temp->bookID);
        temp=temp->next;
    }
    while (temp!=head);
    printf("\n");
}

void recursive_back_traverse(node*ptr){
    if(ptr== NULL)
    return;
    // if(ptr->next == NULL)
    // {
    //     head= ptr;
    // return;
    // }
    recursive_back_traverse(ptr->next);
    printf("%d\t %s\t\n",ptr->price,ptr->bookID);
    // ptr->next->next= ptr;
    // ptr->next= NULL;
}

int main(){
    node*head,*temp,*newnode;
    head=NULL;
    int n;
    n=1;
    while(n<6){
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
        printf("Enter bookId\n");
        scanf("%s",&temp->bookID);
        printf("Enter price\n");
        scanf("%d",&temp->price);
        // printf("Press 1 to continue and 0 to stop");
        // scanf("%d",&n);
        n++;

    }
    
    //printll(head);
    recursive_back_traverse(head);
    

}