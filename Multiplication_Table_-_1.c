#include<stdio.h>
int main()
{
    int i,r=12,n;
    scanf("%d",&n);
    for(i=1;i<=r;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}