#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1;
    int s=a+b;
    while(s<n)
    {
        s=a+b;
        a=b;
        b=s;
        
    }
    if(s-n==n-a)
    {
        printf("%d %d",a,b);
    }
    else if((s-n)<(n-a))
    printf("%d",s);
    else
    printf("%d",a);
}