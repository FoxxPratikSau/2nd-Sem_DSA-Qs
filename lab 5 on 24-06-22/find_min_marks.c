#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int marks;
    int studID;
    char name[100];
    struct node*next;
}node;
void printlist(node*head){
    node*temp;
    temp=head;
    printf("linked list:\n");
    do{
        printf("%d\t %d\t %s\t\n",temp->marks, temp->studID, temp->name);
        temp=temp->next;
    }
    while (temp!=head);

    printf("\n");

}
void minelement(node*head){
    node*temp;
    node *keyval;
    int min;
    temp=head->next;
    min=head->marks;
    while(temp!=head){
        if(min>temp->marks){
            min=temp->marks;
            keyval=temp;
        }
        temp=temp->next;
    }
    printf("\n min marks is %d id is %d name is %s\n",min,keyval->studID,keyval->name);
}
int main(){
    node*head,*temp,*newnode;
    head=NULL;
    int n,count;
    count=1;
    while(count<5){
        newnode=(node*)malloc(sizeof(node));
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
            temp->next=head;
        }

        else{
            temp->next=newnode;
            temp=temp->next;
            temp->next=head;
             
        }
        count++;
        printf("Enter marks\n");
        scanf("%d",&temp->marks);
        printf("Enter studentID\n");
        scanf("%d",&temp->studID);
        printf("Enter name\n");
        scanf("%s",&temp->name);


        // printf("Press 1 to continue and 0 to stop");
        // scanf("%d",&n);
        

    }
    printlist(head);
    minelement(head);
    
}    