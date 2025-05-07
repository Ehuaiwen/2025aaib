#include <stdio.h >
int fib(int);
int main ( void )
{
    int n;
    scanf("%d",&n);
    printf("fib(%d)=%d",n,fib(n));
    return 0;
}

int fib( int x)
{
    if(x==0) return 0;
    if(x==1) return 1;
    return fib(x-1) + fib(x-2);
}

