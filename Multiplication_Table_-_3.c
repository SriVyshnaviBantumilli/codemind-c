#include<stdio.h>
int main()
{
    int i,n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    for(i=a;a<=b;a++)
    {
        printf("%d x %d = %d
",n,a,n*a);
    }
}