#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next,*prev;
};
struct node*head=NULL;
int display()
{
    struct node*ptr=head;
       if (ptr==NULL)
       printf("List is empty...");
    else
    {;
        while (ptr!=NULL)
        {
            printf(" %d ",ptr->data);
            ptr=ptr->next;
        }
    }   
    printf("\n");
}
void insertend (int val)
{
    struct node * ptr=head;
    struct node * temp=(struct node*) malloc(sizeof( struct node));
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
void insertmid (int val,int pos)
{
    struct node *ptr=head;
    struct node *prev;
    struct node *temp=(struct node*) malloc(sizeof (struct node));
    temp->data=val;

    while (ptr-> data!=pos)
    {
        prev=ptr;
        ptr=ptr->next;
    }
    prev->next=temp;
    temp->next=ptr;
    return;
}
void deletemid(int pos)
{
    struct node *ptr=head;
    struct node *prev;
    while(ptr-> data!=pos)
    {
        prev=ptr;
        ptr=ptr->next;
    }
    prev->next=ptr->next;
    free(ptr);
    return;
}
void insertfirst (int val)
{
    struct node *temp=(struct node*) malloc(sizeof(struct node));
    temp->data=val;
    temp->next=head;
    head=temp;
    return;
}
void deletefirst()
{
    struct node*ptr=head;
    head=ptr->next;
    free(ptr);
    return;
}
void deleteend()
       {
         struct node *ptr=head;
         struct node *prev;

         if (head==NULL)
         printf("List is already empty..\n");
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
            int x,y,ch;
            printf("1.insert element at last position  : ");
            printf("\n2.delete element at last position  : ");
            printf("\n3.insert element at midpoint  : ");
            printf("\n4.delete element at midpoint  : ");
            printf("\n5.insert element at first position  : ");
            printf("\n6.delete element at first position  : ");
            printf("\n9.display array  : ");
            printf("\n0.exit\n");
              do
              {
                printf("\nenter your choice:");
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

                    case 3:
                    printf("enter element:");
                    scanf("%d",&x);
                    printf("enter position:");
                    scanf("%d",&y);
                    insertmid( x,y);
                        break;

                     case 4:
                     printf("enter position:");
                     scanf("%d",&x);
                    deletemid(x);
                         break;

                     case 5:
                     printf("enter element:");
                     scanf("%d",&x);
                    insertfirst(x);
                         break;

                      case 6:
                         deletefirst();
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
               }while(ch!=0);
        }


