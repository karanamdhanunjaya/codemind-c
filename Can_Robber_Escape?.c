#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<n)
        {
            l=1;
        }
        else
        {
            l=0;
            break;
        }
    }
    if(l==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}