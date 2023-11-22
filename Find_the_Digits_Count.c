#include<stdio.h>
int main()
{
    int r,n,c=0;// c=count of digits
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        c=c+1;
        n=n/10;
    }
    printf("%d",c);
}