#include<stdio.h>
int main()
{
    int bs;
    scanf("%d",&bs);
    float da,hra,gs;
    if(bs<=10000)
    {
        da=bs*(0.80);
        hra=(0.20)*bs;
        gs=bs+da+hra;
    }
    else  if(bs<=20000)
    {
        da=bs*(0.90);
        hra=bs*(0.25);
        gs=bs+da+hra;
    }
    else
    {
        da=bs*(0.95);
        hra=bs*(0.30);
        gs=da+bs+hra;
    }
    printf("%.2f",gs);
}