#include <stdio.h>
int main()
{
    int a,b,c,ax=0;
    while(scanf("%d",&a)!=EOF)
    {
        for(b=1; b<=a; b++)
        {
            scanf("%d", &c);
            if(c>ax)
                ax=c;
        }
        if(ax<10)
            printf("1\n");
        else if(ax<20)
            printf("2\n");
        else
            printf("3\n");
    }
    return 0;
}
