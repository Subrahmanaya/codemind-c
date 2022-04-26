#include<stdio.h>
int main()
{
    int X,Y,sum=0,sum1=0;
    scanf("%d%d",&X,&Y);
    sum=X*1;
    sum1=Y*2;
    if(X%2==1)
    {
        printf("NO");
    }
    else
    if(X%2==0 && Y%2==0)
    {
        printf("YES");
    }
    else
    if(X>0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}