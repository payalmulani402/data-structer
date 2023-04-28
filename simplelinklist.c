#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node*head=NULL;
int display()
{
    struct node*ptr=head;
       if (ptr==NULL)
       printf("List is empty...");
    else
    {
        while (ptr!=NULL)
        {
            printf("%d",ptr->data);
            ptr=ptr->next;
        }
    }   
    printf("\n");
}
void insertend (int val)
{
    struct node * ptr=head;
    struct node * temp=(struct node*) malloc (sizeof ( struct node));
    temp->data=val;
    temp->next=NULL;
        if (head==NULL)
        {
            head=temp;
            return;
        }
      while(ptr->next!=NULL)
      ptr=ptr->next;
      ptr->next=temp;
      return;  
}
void deleteend()
       {
         struct node *ptr=head;
         struct node *prev;

         if (head==NULL)
         printf("List is alrady empty..\n");
         else if (ptr->next==NULL)
         {
            head=NULL;
            free (ptr);
         }
         else
         {
              while(ptr->next!=NULL)
              {
                prev=ptr;
                ptr=ptr->next;
              }
              prev->next=NULL;
              free (ptr);              
         }
         return;
        }
          int main()
        {
            int x,ch;
            printf("1.insert element at last position");
            printf("\n2.delete element at last position");
            printf("\n9.display array");
            printf("\n0.exit\n");
              while (ch!=0)
              {
                printf("enter your choice:");
                scanf("%d",&ch);
                switch(ch)
                {
                    case 1:
                    printf("enter element:");
                    scanf("%d",&x);
                    insertend(x);
                    break;

                    case 2:
                       deleteend();
                       break;

                       case 9:
                       display();
                       break;

                       case 0:
                       break;
                       default:
                       printf("wrong chice...");
                       break;
                }
              }
        }
