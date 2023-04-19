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
    insertend (10);
    insertend (20);
    insertend (30);
    insertend (40);
    insertend (50);

    display();

    
 deletefirst();
 deletefirst();
 deletefirst();
 deletefirst();
 deletefirst();
 display();
}