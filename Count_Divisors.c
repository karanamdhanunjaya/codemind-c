#include<stdio.h>

int main()
{
    int i,r,k,t=0;
    scanf("%d%d%d",&i,&r,&k);
    for(int j=i;j<=r;j++)
    {
        if(j%k==0)
        {
            t++;
        }
    }
    printf("%d",t);
}