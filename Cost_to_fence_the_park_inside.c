#include<stdio.h>
int main()
{
    int l,b,w,c,area,tot_cost;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    if(l<=w+w || b<=w+w)
    {
        printf("Impossible");
    }
    else
    {
        area=l*b-((l-2*w)*(b-2*w));
        tot_cost=area*c;
        printf("%d",tot_cost);
    }
    return 0;
}