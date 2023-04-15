#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50,};
    int c=a[0];
    int i;
    for(i=0;i<5;i++)
    {
        a[i]=a[i+1];
    }
    a[5]=c;
    for (i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}