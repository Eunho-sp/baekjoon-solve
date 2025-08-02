#include <stdio.h>
int main()
{
    int b;
    int m;
    int sum=0;
    int a[42]={'\0'};

    for(int i=0;i<10;i++)
    {
        scanf("%d",&b);
        m = b % 42;
        a[m] = 1;
    }

    for(int j=0;j<42;j++)
    {
        if(a[j]==1)
        {
            sum +=1;
        }
    }

    printf("%d",sum);

    return 0;
}