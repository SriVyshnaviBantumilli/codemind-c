#include<stdio.h>
int main(){
    int t,n,m,k,i;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d %d",&n,&m, &k);
        if(n<=(m-k)){
            printf("YES
");
        }else{
            printf("NO
");
        }
    }
    return 0;
}