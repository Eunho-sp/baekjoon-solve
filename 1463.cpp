#include <stdio.h>
#define min(a, b) (((a) < (b)) ? (a) : (b))
int inf = 987654321;

int cache[1000001]={'\0'}; // cache 는 x에서 내려올때 연산 횟수

int f(int x)
{
    if(x==1)
    {
        return 0;
    }
    if(cache[x]!=inf)
    {
        return cache[x];
    }
    if(x%2==0) cache[x] = min(cache[x],f(x/2)+1);
    if(x%3==0) cache[x] = min(cache[x],f(x/3)+1);
    cache[x] = min(cache[x],f(x-1)+1);

    return cache[x];
}
int main()
{
    int n;
    int result;

    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
        cache[i] = inf;
    }
    result = f(n);

    printf("%d",result);

    return 0;
}