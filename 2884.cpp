#include <stdio.h>
int main()
{
    int h,m;
    int r_h=0,r_m=0;
    int count=0;

    scanf("%d %d",&h,&m);

    if(m<45)
    {
        r_m = 15+m;
        count = 1;
    }
    else if(m>=45)
    {
        r_m = m - 45;
    }

    if(count==1 && h==0)
    {
        r_h = 23;
    }
    else if(count == 1)
    {
        r_h = h - 1;
    }
    else
    {
        r_h = h;
    }

    printf("%d %d",r_h,r_m);

    return 0;

}