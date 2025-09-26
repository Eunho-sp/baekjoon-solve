#include <stdio.h>
int main()
{
    long long int a,b,c;
    long long int aa,bb,cc;
    long long int max,sum;
    int su;

    while(1)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        su = a+b+c;
        if(su == 0)
        {
            return 0;
        }
        if(a>=b && a>=c)
        {
            max=a*a;
            bb = b*b;
            cc = c*c;
            sum = bb + cc;
            if(max == sum)
            {
                printf("right\n");
            }
            else
            {
                printf("wrong\n");
            }
        
        }
        else if(b>=a && b>=c)
        {
            max=b*b;
            aa = a*a;
            cc = c*c;
            sum = aa + cc;
            if(max == sum)
            {
                printf("right\n");
            }
            else
            {
                printf("wrong\n");
            }
        }
        else
        {
            max=c*c;
            aa = a*a;
            bb = b*b;
            sum = aa + bb;
            if(max == sum)
            {
                printf("right\n");
            }
            else
            {
                printf("wrong\n");
            }
        }
    }

    return 0;

}