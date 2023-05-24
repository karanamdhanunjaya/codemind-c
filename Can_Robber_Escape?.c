#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(x[i]<n)
        {
            k=1;
        }
        else
        {
            k=0;
            break;
        }
    }
    if(k==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}