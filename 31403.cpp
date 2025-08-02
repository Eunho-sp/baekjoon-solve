#include <stdio.h>
int main()
{
    int a,b,c;
    int n;
    long long int m;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    printf("%d\n",a+b-c);

    for(int i=1;i<=10000;i=i*10)// i*=10 but i*10 (X)
    {
        if(b/i == 0)
        {
            n = i;
            break;
        }
    }

    printf("%d",((a*n)+b)-c);

    return 0;
}