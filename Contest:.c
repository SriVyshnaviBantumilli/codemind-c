#include<stdio.h>
int main()
{
    int X,x,a,b;
    scanf("%d%d%d",&X,&a,&b);
    x=(a+(2*b));
    if(x>=X )
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}