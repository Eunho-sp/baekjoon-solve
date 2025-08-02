#include <stdio.h>

long long int fact(int i)
{
    if (i<=1)
    {
        return 1;
    }
    return i*fact(i-1);
}
int main()
{
    int n;
    long long int k = 0;
    scanf("%d",&n);

    k = fact(n);
    printf("%lld",k);

    return 0;
    
}