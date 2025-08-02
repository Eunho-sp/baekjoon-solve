#include <stdio.h>
int main()
{
    int n;
    int x=2,y=7;
    int i;
    scanf("%d",&n);

    for(i=2;i<1000000000;i++)
    {
        if(n==1)
        {
            i = -1;
            break;
        }
        if(n>=2 && n<=7)
        {
            i = 0;
            break;
        }
        x=x+6*(i-1);
        y=y+6*(i+1);
        if(n>=x && n<=y)
        {
            break;
        }
    }

    printf("%d",i+2);

    return 0;

}