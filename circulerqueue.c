#include<stdio.h>
#define n 5
int a[n];
int f=-1,r=-1;
void display()
{
    printf("\n");
    int i=f;
    if(f<0)
    {
        printf("queue is empty....");
    }
    else 
    {
        do 
        {
        printf("%d ",a[i]);
        i=(i+1)%n;
        }
    while (i!=(r+1) %n);
    }
}
void insert (int val)
{
    if ((r+1)%n==f)
    printf("queue is full.");
    else if (r<0)
    {
        f=r=0;
        a[r]=val;
       // printf("\n insertrd elemet is:%d",val);
    }
     else
     {
        r=(r+1)%n;
        a[r]=val;
       // printf("\n insertrd elemet is:%d",val);
    }
}
void delete()
{
    if (f<0)
    printf("queue is already empty.");
    else if(f==r)
    {
       // printf("\n delered elemet is:%d",a[f]);
        f==-1,r=-1;
    }
    else
       {
      
       // printf("\n deleted elemet is :%d",a[f]);
        f=(f+1)%n;
    }
}
         
    int main()
    {
        insert(10);
        insert(20);
        insert(30);
        insert(40);
        insert(50);

    display();

       delete();
       delete();
       delete();
       delete();
       delete();
       insert(100);
       insert(200);

       display();
    }
