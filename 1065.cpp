#include <stdio.h>
int main()
{
    int n;
    int h_n=0,t_n=0,_n=0;
    int count = 0;
    scanf("%d",&n);

    if(n<100)
    {
        printf("%d",n);

        return 0;
    }
    else if(n==1000)
    {
        printf("%d",144);

        return 0;
    }
    
    for(int i=100;i<=n;i++)
    {
        h_n = i/100;
        t_n = (i%100)/10;
        _n = i%10;
        if((h_n-t_n)==(t_n-_n))
        {
            count++;
        }
    }

    printf("%d",99+count);

    return 0;
}