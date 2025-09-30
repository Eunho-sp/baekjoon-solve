#include <stdio.h>

int a[10001]={'\0'};
int k;

long long int f(long long int m)
{
    long long int sum=0;
    for(int j=0;j<k;j++)
    {
        sum = sum + a[j]/m;
    }

    return sum;
}


int main()
{
    long long int left=1;
    long long int right=2147483648;
    int n=0;

    scanf("%d %d",&k,&n);

    for(int i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }

    while (left<right)
    {
        long long mid = (left + right +1)/2;
        if(f(mid)>=n)
        {
            left = mid;
        }
        else
        {
            right = mid -1;
        }
    }

    printf("%lld",left);
}