#include <stdio.h>

long long int fact(int i)
{
    if (i==1)
    {
        return 1;
    }
    return i*fact(i-1);
}
int ten(int j)
{
    if(j==1)
    {
        return 1;
    }
    return 10 * ten(j-1);
}

int main()
{
    int n;
    int sum = 0;
    long long int k = 0;
    long long int t = 0;
    scanf("%d",&n);

    k = fact(n);
    printf("%lld\n",k);
    if(k<10)
    {
        printf("%d",0);

        return 0;
    }
    else
    {
        for(int i=2;i<1136;i++)
        {
            t = ten(i);
            if(k % t == 0)
            {
                sum = sum + 1;
            }
            else
            {
                break;
            }
        }
    }

    printf("%d",sum);
    
    return 0;
}//하지만 이 코드는 n이 20 이하일때만 가능 unsigned long long int 로 계산할수 있는 범위를 넘는다