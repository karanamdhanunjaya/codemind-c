#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int p=n*n,r;
    int m=p,s=0;
    while(p>0)
    {
        r=p%10;
        s=s+r;
        p=p/10;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    
}