#include<stdio.h>
int main()
{
    int x,y,req;
    scanf("%d%d",&x,&y);
    req=x-y;
    if(x<=y)
    {
       printf("0"); 
    }
    else
    {
        printf("%d",req);
    }
}