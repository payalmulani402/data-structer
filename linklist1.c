#include<stdio.h>
struct self
{
    int n;
    char c;
    struct self *ptr;
};
int main()
{
    struct self a,b;
    a.n = 65;
    a.c ='A';
    a.ptr = NULL;

    b.n = 66;
    b.c = 'B';
    b.ptr = NULL;

    printf("A ->value of n: %d\t ch: %c",a.n,a.c);
    printf("\nB ->value of n: %d\t ch: %c",b.n,b.c);

    a.ptr=&b;
    b.ptr=&a;
 //  printf("\nA value of n: %d\t ch: %c",b.ptr-> n,b.ptr-> c);
}