#include<stdio.h>
int main()
{
    int r,n,l,f,O;
    scanf("%d",&n);
    O=n;
    while(n!=0)
    {
        r=n%10;
        if(n==O)
        {
          l=r;  
        }
        n=n/10;
        if(n==0)
        {
            f=r;
        }
    }
    printf("%d",(f+l));
}