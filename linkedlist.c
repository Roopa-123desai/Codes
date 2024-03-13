#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
typedef struct node NODE;
NODE *create_node();
NODE *insert_front(NODE *head);
void display(NODE *head);
NODE *insert_end(NODE *head);
NODE *delete_front(NODE *head);
NODE *delete_end(NODE *head);
 int main()
 {
     NODE *head=NULL;
     //create_node();
     //insert_front(head);
     //display(head);
     int ch;
     while(1)
     {
         printf("Enter the choice\n");
         printf("1.insert_front\n2.display\n3.insert_end\n4.dele_front\n5.delete_end\n");
         scanf("%d",&ch);
         switch(ch)
         {
             case 1: head=insert_front(head);
             break;
             case 2: display(head);
             break;
             case 3:head=insert_end(head);
             break;
             case 4:head=delete_front(head);
             break;
             case 5:head=delete_end(head);
             break;
         }
     }
 }
 NODE *create_node()
 {
     NODE *n1;
     n1=(NODE*)malloc(sizeof(NODE));
     if(n1==NULL)
     {
         printf("Couldn't allocate memory\n");
         exit(0);
     }
     printf("Enter the number\n");
     scanf("%d",&n1->data);
     n1->link=NULL;
     return n1;
 }
 NODE *insert_front(NODE *head)
 {
     NODE *temp;
     temp=create_node();
     if(head==NULL)
     {
         head=temp;
     }
     else
     {
         temp->link=head;
         head=temp;
     }
     return head;
 }
 void display(NODE *head)
 {
     NODE *temp;
     temp=head;
     if(temp==NULL)
     {
         printf("List is empty\n");
     }
     else
     {
         while(temp!=NULL)
         {
             printf("%d",temp->data);
            temp=temp->link;
         }
         printf("\n");
     }
 }
 NODE *insert_end(NODE *head)
 {
     NODE *temp,*cur;
     temp=create_node();
     if(head==NULL)
     {
         head=temp;
     }
     else
     {
       cur=head;
       while(cur->link!=NULL)
       {
           cur=cur->link;
       }
       cur->link=temp;
     }
     return head;
 }
 NODE *delete_front(NODE *head)
 {
     NODE *temp;
     temp=head;
     if(temp==NULL)
     {
         printf("List is empty\n");
     }
     else
     {
         head=temp->link;
         printf("%d isDeleted node\n",temp->data);
         temp->link=NULL;
         free(temp);

     }
     return head;
 }
 NODE *delete_end(NODE *head)
 {
     NODE *temp,*pre;
     temp=head;
     if(head==NULL)
     {
         printf("list is empty\n");
     }
     else if(temp->link==NULL)
     {
         head=NULL;
         printf("Deleted data is %d",temp->data);
         free(head);
     }
     else
     {
         while(temp->link!=NULL)
         {
             pre=temp;
             temp=temp->link;
         }
         pre->link=NULL;
         printf("Deleted data is %d",temp->data);
         free(temp);

     }
     return head;
 }
