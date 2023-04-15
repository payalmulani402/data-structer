#include<stdio.h>
#define n 5
int a[n],i;
int top=-1;
void display()
{
    if(top==-1)
    printf("Array is empty: ");
    else
    {
    for (i=0;i<=top;i++)
      printf("%d ",a[i]);
    }
       printf("\n");
}
int insertend (int val)
{
    if (top>=n-1)
      printf("array is empty: \n");
     else
     {
        
       top++;
        a[top]=val;
        printf("insert element is : %d\n",a[top]);  
     } 
}
int deleteend ()
{
    if (top==-1)                                                                                                                                                                             
      printf("array is already empty :\n");
     else
     {
       printf("delete element is : %d\n",a[top]);
       top--;
     } 

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
          insertend (x);
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
          printf("wrong chice....");
          break;
                   
    }
}
}