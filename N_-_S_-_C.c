#include<stdio.h>
int main()
{
    int i,a,b,sq,cube;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        printf("%d %d %d
",i,i*i,i*i*i);
        
    }
}