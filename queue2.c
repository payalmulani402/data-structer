#include<stdio.h>
#define n 5
int a[n];
int f=-1,r=-1,i;
int display()
{
    if (f<0)
    printf("queue is empty...");
    else
    {
        for (i=f;i<=r;i++)
        printf("%d",a[i]);
    }
    printf("\n");
}
int insertend (int val)
{
    if (r>=n-1)
    printf("queue is full..\n");
    else if(r<0)
    {
        f=r=0;
        a[r]=val;
    }
    else
    {
        a[++r]=val; 
    }
}
int deletefirst()
{
    if (f<0)
    printf("queue is already empty..\n");
    else if (f==r)
    {
        f=r=-1;
    }
    else
    {
        ++f;
    }
}
   int main()
   {
        int x,ch;
        printf("1.insert element at last position");
        printf("\n2. delete element at last position");
        printf("\n9. display array");
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
        }
   }