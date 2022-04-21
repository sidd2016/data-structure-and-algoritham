#include<stdio.h>
#include<conio.h>
typedef struct nodetype
{
int info;
struct nodetype *next;
}node;
void createEmptylist(node **head);
void Traverseinorder(node *head);
void InsertAtBeginning(node **head,int item);
void main()
{
node *head;
int choice,elements,after;
createEmptylist(&head);
while(1)
{
printf("operations available are\n");
printf("1: Insert at beginning \n");
printf("2: Traverse in order\n");
printf("\nenter your choice 1 and 2:");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("\n enter elements");
       scanf("%d",&elements);
       InsertAtBeginning(&head,elements);
       break;
case 2:if(head==NULL)
       printf("\n List is empty");
       else
       Traverseinorder(head);
       printf("\n press any key to continue");
       getch();
       break;
default: exit(0);
       }
       }
       }
       void createEmptylist(node **head)
       {
       *head=NULL;
	}
       void InsertAtBeginning(node **head,int item)
       {
       node *ptr;
       ptr=(node*)malloc(sizeof(node));
       ptr->info=item;
       if(*head==NULL)
       ptr->next=NULL;
       else
       ptr->next=*head;
       *head=ptr;
       }
       void Traverseinorder(node *head)
       {
       while(head!=NULL)
       {
       printf("\n%d",head->info);
       head=head->next;
       }
       }