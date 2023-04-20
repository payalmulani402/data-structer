#include<stdio.h>
#define n 5
int a[n];
int f=-1,r=-1,i;
void display()
{
    if(f<0)
        printf("queue is empty....");
    else 
    {
        for(i=f;i<=r;i++)
        printf("%d",a[i]);
    }
    printf("\n");
}
 int insertend (int val)
{
    if (r>=n-1)
    printf("queue is full...\n");
    else if (r<0)
    {
        f=r=0;
        a[r]=val;
    }
        else
        a[++r]=val;
}
int deletfirst()
{
    if (f<0)
    printf("queue is already empty.");
    else if(f==r)
        f=r=-1;
        else
           ++f;
}
int insertfirst (int val)
{
    if (f==0)
    printf("no insert this time\n");
    else if (f<0)
    {
        f=r=0;
        a[f]=val;
    }
        else
        a[--f]=val;
         }
     
int deletend()
{
    if (r<0)
    printf("queue is already empty.");
    else if(r==f)
            f==-1,r=-1;
        else    
        r--;
}
int main()
 {        
        int x,ch;
        printf("1.insert last element");
        printf("\n2 delet first element");
        printf("\n3.display");
        printf("\n7.insent first element");
        printf("\n8.delet last element");
        printf("\n0. exit\n");
        while (ch!=0)
        {
            printf("enter your choice:");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:

                printf("enter element:");
                scanf("%d",&x);
                insertend (x);
                break;

                case 2:

                deletfirst();
                break;
                
                case 7:
                printf("enter element:");
                scanf("%d",&x);
                insertfirst(x);
                break;

                case 8:
                deletend ();
                break;

                case 3:
                display();
                break;

                case 0:
                break;
                default:
                printf("wrong chice,,,");
                break;
            }
        }
 }