#include<stdio.h>

int main()
{
    int hf,sf,spf;
    scanf("%d%d%d",&hf,&sf,&spf);
    if(hf>50&&sf>60&&spf>100)
    {
        printf("10");
    }
    else if(sf>60&&spf>100&&hf<60)
    {
        printf("8");
    }
    else if(hf>50&&sf>60&&spf<100)
    {
        printf("9");
    }
    else if(hf>50&&spf>100&&sf<60)
    {
        printf("7");
    }
    else if(hf>50||sf>60||spf>100)
    {
        printf("6");
    }
    else
    printf("5");
}